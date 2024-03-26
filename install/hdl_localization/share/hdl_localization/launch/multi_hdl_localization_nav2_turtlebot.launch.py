#############################################################################

from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration

import launch_ros.actions
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode

from ament_index_python.packages import get_package_share_directory
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument

def generate_launch_description():

    # Important, required arguments
    points_topic1 = LaunchConfiguration('points_topic', default='/tb3_0/velodyne_points')
    points_parents_frame_id = LaunchConfiguration('points_parents_frame_id', default='base_link')
    imu_topic1 = LaunchConfiguration('imu_topic', default='/tb3_0/imu')
    odom_child_frame_id1 = LaunchConfiguration('odom_child_frame_id', default='tb3_0/base_link') 
    robot_odom_frame_id1 = LaunchConfiguration('robot_odom_frame_id', default='tb3_0/odom')
    algined_points_remap1 = LaunchConfiguration('aligned_points', default='/tb3_0/aligned_points')
    path_remap1 = LaunchConfiguration('path', default='/tb3_0/path')

    points_topic2 = LaunchConfiguration('points_topic', default='/tb3_1/velodyne_points')
    imu_topic2 = LaunchConfiguration('imu_topic', default='/tb3_1/imu')
    odom_child_frame_id2 = LaunchConfiguration('odom_child_frame_id', default='tb3_1/base_link')
    robot_odom_frame_id2 = LaunchConfiguration('robot_odom_frame_id', default='tb3_1/odom')
    algined_points_remap2 = LaunchConfiguration('aligned_points', default='/tb3_1/aligned_points')
    path_remap2 = LaunchConfiguration('path', default='/tb3_1/path')
    
    # 우선 겹치는 topic들 먼저 처리하기 aligned_points랑 path같은 것들 odom도 마찬가지
    
    globalmap_pcd = DeclareLaunchArgument('globalmap_pcd', default_value='/root/workspace/src/hdl_localization/data/map.pcd', description='Path to the global map PCD file')

    # optional arguments
    use_imu = LaunchConfiguration('use_imu', default='true')
    invert_imu_acc = LaunchConfiguration('invert_imu_acc', default='false')
    invert_imu_gyro = LaunchConfiguration('invert_imu_gyro', default='false')
    use_global_localization = LaunchConfiguration('use_global_localization', default='false')
    enable_robot_odometry_prediction = LaunchConfiguration('enable_robot_odometry_prediction', default='false')
   
    plot_estimation_errors = LaunchConfiguration('plot_estimation_errors', default='false')

    container = ComposableNodeContainer(
        name='container',
        namespace='',
        package='rclcpp_components',
        executable='component_container',
        composable_node_descriptions=[
            ComposableNode(
                package='hdl_localization',
                plugin='hdl_localization::GlobalmapServerNodelet',
                name='GlobalmapServerNodelet',
                parameters=[
                    {'globalmap_pcd': LaunchConfiguration('globalmap_pcd')},
                    {'convert_utm_to_local': True},
                    {'downsample_resolution': 0.1}]),
            ComposableNode(
                package='hdl_localization',
                plugin='hdl_localization::HdlLocalizationNodelet',
                name='HdlLocalizationNode1',
                remappings=[('/velodyne_points', points_topic1), ('/gpsimu_driver/imu_data', imu_topic1), 
                            ('/aligned_points', algined_points_remap1), ('/path', path_remap1)],
                parameters=[
                    {'points_parents_frame_id': points_parents_frame_id},
                    {'odom_child_frame_id': odom_child_frame_id1},
                    {'use_imu': use_imu},
                    {'invert_acc': invert_imu_acc},
                    {'invert_gyro': invert_imu_gyro},
                    {'cool_time_duration': 2.0},
                    {'enable_robot_odometry_prediction': enable_robot_odometry_prediction},
                    {'robot_odom_frame_id': robot_odom_frame_id1},
                    # <!-- available reg_methods: NDT_OMP, NDT_CUDA_P2D, NDT_CUDA_D2D-->
                    {'reg_method': 'NDT_OMP'},
                    {'ndt_neighbor_search_method': 'DIRECT7'},
                    {'ndt_neighbor_search_radius': 1.0},
                    {'ndt_resolution': 0.5},
                    {'downsample_resolution': 0.1},
                    {'specify_init_pose': True},
                    {'init_pos_x': 0.0},
                    {'init_pos_y': 0.0},
                    {'init_pos_z': 0.0},
                    {'init_ori_w': 1.0},
                    {'init_ori_x': 0.0},
                    {'init_ori_y': 0.0},
                    {'init_ori_z': 0.0},
                    {'use_global_localization': use_global_localization}]),
                ComposableNode(
                package='hdl_localization',
                plugin='hdl_localization::HdlLocalizationNodelet',
                name='HdlLocalizationNode2',
                remappings=[('/velodyne_points', points_topic2), ('/gpsimu_driver/imu_data', imu_topic2),
                            ('/aligned_points', algined_points_remap2), ('/path', path_remap2)],
                parameters=[
                    {'points_parents_frame_id': points_parents_frame_id},
                    {'odom_child_frame_id': odom_child_frame_id2},
                    {'use_imu': use_imu},
                    {'invert_acc': invert_imu_acc},
                    {'invert_gyro': invert_imu_gyro},
                    {'cool_time_duration': 2.0},
                    {'enable_robot_odometry_prediction': enable_robot_odometry_prediction},
                    {'robot_odom_frame_id': robot_odom_frame_id2},
                    # <!-- available reg_methods: NDT_OMP, NDT_CUDA_P2D, NDT_CUDA_D2D-->
                    {'reg_method': 'NDT_OMP'},
                    {'ndt_neighbor_search_method': 'DIRECT7'},
                    {'ndt_neighbor_search_radius': 1.0},
                    {'ndt_resolution': 0.5},
                    {'downsample_resolution': 0.1},
                    {'specify_init_pose': True},
                    {'init_pos_x': 0.0},
                    {'init_pos_y': 0.0},
                    {'init_pos_z': 0.0},
                    {'init_ori_w': 1.0},
                    {'init_ori_x': 0.0},
                    {'init_ori_y': 0.0},
                    {'init_ori_z': 0.0},
                    {'use_global_localization': use_global_localization}])

        ],
        output='screen',   
    )

    return LaunchDescription([globalmap_pcd, 
                            launch_ros.actions.SetParameter(name='use_sim_time', value=True), 
                            container])        