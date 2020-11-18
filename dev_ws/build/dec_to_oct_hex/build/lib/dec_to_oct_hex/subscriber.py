#listener code


import rclpy
from rclpy.node import Node

from std_msgs.msg import Int32


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('code_listener')
        self.subscription = self.create_subscription(
            Int32,
            'decode',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('0x8: "%o" 0x16: "%x"' % (msg.data, msg.data))


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
