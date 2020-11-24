import sys
import rclpy
import random
from rclpy.node import Node
from dictionary_interface.srv import GetElement
from time import sleep
from rclpy.callback_groups import ReentrantCallbackGroup


def main(args=None):
    rclpy.init(args=args)
    node = rclpy.create_node('minimal_client_async')
    cb_group = ReentrantCallbackGroup()
    while rclpy.ok():
        sleep(1)
        cli = node.create_client(GetElement, 'get_element', callback_group=cb_group)
        did_run = False
        did_get_response= False
    
        async def call_service():
            nonlocal cli, node, did_run, did_get_response
            did_run = True
            try:
                req = GetElement.Request()
                req.n = random.randint(1,15)
                future = cli.call_async(req)
                try:
                    response = await future
                except Exception as e:
                    node.get_logger().info('Service call failed %r' % (e,))
                else:
                    node.get_logger().info(
                        '%s' % response.elm)
            finally:
                did_get_response= True
            
        while not cli.wait_for_service(timeout_sec=1.0):
            node.get_logger().info('service not available, waiting again...')
    
        timer = node.create_timer(0.5, call_service, callback_group=cb_group)
    
        while rclpy.ok() and not did_run:
            rclpy.spin_once(node)
    
        if did_run:
            # call timer callback only once
            timer.cancel()
    
        while rclpy.ok() and not did_get_response:
            rclpy.spin_once(node)




if __name__ == '__main__':
        main()