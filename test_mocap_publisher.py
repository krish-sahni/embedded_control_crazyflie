#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import math
from geometry_msgs.msg import Point, Quaternion
from motion_capture_tracking_interfaces.msg import NamedPoseArray, NamedPose
from rclpy.qos import SensorDataQoS
from rclpy.duration import Duration

class MocapPublisher(Node):
    def __init__(self):
        super().__init__('mocap_publisher')

        qos = SensorDataQoS()
        qos.deadline = Duration(seconds=0.01)  # 100 Hz

        self.publisher_ = self.create_publisher(NamedPoseArray, 'poses', qos)
        self.timer = self.create_timer(0.01, self.timer_callback)  # 100 Hz
        self.num_drones = 10

    def timer_callback(self):
        msg = NamedPoseArray()
        msg.header.frame_id = "world"  # Match what C++ code sends
        for i in range(self.num_drones):
            np = NamedPose()
            np.name = f"drone_{i}"
            np.pose.position = Point(x=3.0, y=4.0, z=5.0)
            np.pose.orientation = Quaternion(x=0.0, y=0.0, z=0.0, w=math.nan)
            msg.poses.append(np)
        self.publisher_.publish(msg)
        self.get_logger().info('Published random mocap data.')

def main(args=None):
    rclpy.init(args=args)
    node = MocapPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
