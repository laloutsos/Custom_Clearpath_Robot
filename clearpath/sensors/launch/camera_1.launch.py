from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import EnvironmentVariable, FindExecutable, PathJoinSubstitution, LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():

    launch_arg_prefix = DeclareLaunchArgument(
        'prefix',
        default_value='',
        description='')

    prefix = LaunchConfiguration('prefix')

    # Nodes
    node_camera_1_gz_bridge = Node(
        name='camera_1_gz_bridge',
        executable='parameter_bridge',
        package='ros_gz_bridge',
        namespace='j100_0000/sensors/',
        output='screen',
        parameters=
            [
                {
                    'use_sim_time': True
                    ,
                    'config_file': '/home/robolab/clearpath/sensors/config/camera_1.yaml'
                    ,
                }
                ,
            ]
        ,
    )

    node_camera_1_static_tf = Node(
        name='camera_1_static_tf',
        executable='static_transform_publisher',
        package='tf2_ros',
        namespace='j100_0000',
        output='screen',
        arguments=
            [
                '--frame-id'
                ,
                'camera_1_link'
                ,
                '--child-frame-id'
                ,
                'j100_0000/robot/base_link/camera_1'
                ,
            ]
        ,
        remappings=
            [
                (
                    '/tf'
                    ,
                    'tf'
                )
                ,
                (
                    '/tf_static'
                    ,
                    'tf_static'
                )
                ,
            ]
        ,
        parameters=
            [
                {
                    'use_sim_time': True
                    ,
                }
                ,
            ]
        ,
    )

    node_camera_1_gz_image_bridge = Node(
        name='camera_1_gz_image_bridge',
        executable='image_bridge',
        package='ros_gz_image',
        namespace='j100_0000/sensors/',
        output='screen',
        arguments=
            [
                '/j100_0000/sensors/camera_1/image'
                ,
            ]
        ,
        remappings=
            [
                (
                    '/j100_0000/sensors/camera_1/image'
                    ,
                    '/j100_0000/sensors/camera_1/color/image'
                )
                ,
                (
                    '/j100_0000/sensors/camera_1/image/compressed'
                    ,
                    '/j100_0000/sensors/camera_1/color/compressed'
                )
                ,
                (
                    '/j100_0000/sensors/camera_1/image/compressedDepth'
                    ,
                    '/j100_0000/sensors/camera_1/color/compressedDepth'
                )
                ,
                (
                    '/j100_0000/sensors/camera_1/image/theora'
                    ,
                    '/j100_0000/sensors/camera_1/color/theora'
                )
                ,
            ]
        ,
        parameters=
            [
                {
                    'use_sim_time': True
                    ,
                }
                ,
            ]
        ,
    )

    # Create LaunchDescription
    ld = LaunchDescription()
    ld.add_action(launch_arg_prefix)
    ld.add_action(node_camera_1_gz_bridge)
    ld.add_action(node_camera_1_static_tf)
    ld.add_action(node_camera_1_gz_image_bridge)
    return ld
