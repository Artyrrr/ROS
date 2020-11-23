from dictionary_interface.srv import GetElement
import rclpy
from rclpy.node import Node


class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(GetElement, 'get_element', self.get_element_callback)

    def get_element_callback(self, request, response):
        high_building = {
        1 : 'name = Burj Khalifa, country = United Arab Emirates, height = 829.8', 
        2 : 'name = Petronius (oil platform), country = United States, height = 640', 
        3 : 'name = Tokyo Skytree, country = Japan, height = 634',
        4 : 'name = KVLY-TV mast, country = United States, height = 629',
        5 : 'name = Canton Tower, country = China, height = 604',
        6 : 'name = Abraj Al Bait Towers, country = Saudi Arabia, height = 601',
        7 : 'name = Bullwinkle (oil platform), country = United States, height = 529',
        8 : 'name = Troll A platform, country = Norway, height = 472',
        9 : 'name = Lualualei VLF transmitter, country = United States, height = 458',
        10 : 'name = Petronas Twin Towers, country = Malaysia, height = 452',
        11 : 'name = Willis Tower, country = United States, height = 442',
        12 : 'name = Ekibastuz GRES-2 Power Station, country = Kazakhstan, height = 419.7',
        13 : 'name = Dimona Radar Facility, country = Israel, height = 400',
        14 : 'name = Kyiv TV Tower, country = Ukraine, height = 385',
        15 : 'name = Jintang-Cezi Overhead Powerline Link, country = China, height = 380'}
        response.elm = high_building[request.n]
        self.get_logger().info('Incoming request\nnumber: %d' % (request.n))

        return response

def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()