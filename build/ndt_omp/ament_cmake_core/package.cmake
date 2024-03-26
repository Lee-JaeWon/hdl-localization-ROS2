set(_AMENT_PACKAGE_NAME "ndt_omp")
set(ndt_omp_VERSION "0.0.0")
set(ndt_omp_MAINTAINER "koide <koide@aisl.cs.tut.ac.jp>")
set(ndt_omp_BUILD_DEPENDS "pcl_ros" "roscpp" "libpcl-all-dev")
set(ndt_omp_BUILDTOOL_DEPENDS "catkin" "ament_cmake_auto" "ros_environment")
set(ndt_omp_BUILD_EXPORT_DEPENDS "pcl_ros" "roscpp" "libpcl-all-dev")
set(ndt_omp_BUILDTOOL_EXPORT_DEPENDS )
set(ndt_omp_EXEC_DEPENDS "pcl_ros" "roscpp" "libpcl-all-dev")
set(ndt_omp_TEST_DEPENDS )
set(ndt_omp_GROUP_DEPENDS )
set(ndt_omp_MEMBER_OF_GROUPS )
set(ndt_omp_DEPRECATED "")
set(ndt_omp_EXPORT_TAGS)
list(APPEND ndt_omp_EXPORT_TAGS "<build_type condition=\"$ROS_VERSION == 1\">catkin</build_type>")
list(APPEND ndt_omp_EXPORT_TAGS "<build_type condition=\"$ROS_VERSION == 2\">ament_cmake</build_type>")