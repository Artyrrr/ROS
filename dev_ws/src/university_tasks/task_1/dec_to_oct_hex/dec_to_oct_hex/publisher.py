#talker decode

import rclpy
from rclpy.node import Node

from std_msgs.msg import Int32


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('decimal_talker')
        self.publisher_ = self.create_publisher(Int32, 'decode', 10)
        timer_period = 1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = Int32()
        msg.data = 22
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%d"' % msg.data)
        msg.data += 1


def main(args=None):
    rclpy.init(args=args)

    pub = MinimalPublisher()

    rclpy.spin(pub)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    pub.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
