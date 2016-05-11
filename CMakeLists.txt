cmake_minimum_required(VERSION 2.8.3)
project(darwin_framework)

find_package(catkin REQUIRED COMPONENTS roscpp)

# find_package(Boost REQUIRED COMPONENTS system)
catkin_package(
#  INCLUDE_DIRS include
  LIBRARIES darwin_framework
#  CATKIN_DEPENDS other_catkin_pkg
#  DEPENDS system_lib
)

include_directories(include)

## Declare a C++ library
add_library(darwin_framework
  src/math/Plane.cpp
  src/math/Vector.cpp
  src/math/Point.cpp
  src/math/Matrix.cpp
  src/motion/JointData.cpp
  src/motion/MotionStatus.cpp
  src/motion/Kinematics.cpp
  src/motion/MotionManager.cpp
  src/motion/modules/Action.cpp
  src/motion/modules/Head.cpp
  src/motion/modules/Walking.cpp
  src/CM730.cpp
  src/MX28.cpp
  src/vision/BallTracker.cpp
  src/vision/BallFollower.cpp
  src/vision/Camera.cpp
  src/vision/ColorFinder.cpp
  src/vision/ImgProcess.cpp
  src/vision/Image.cpp
)

# target_link_libraries(darwin_framework
#   ${catkin_LIBRARIES}
# )

#############
## Install ##
#############

# all install targets should use catkin DESTINATION variables
# See http://ros.org/doc/api/catkin/html/adv_user_guide/variables.html

## Mark executable scripts (Python etc.) for installation
## in contrast to setup.py, you can choose the destination
# install(PROGRAMS
#   scripts/my_python_script
#   DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )

## Mark executables and/or libraries for installation
# install(TARGETS darwin_framework darwin_framework_node
#   ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#   LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#   RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )

## Mark cpp header files for installation
# install(DIRECTORY include/${PROJECT_NAME}/
#   DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
#   FILES_MATCHING PATTERN "*.h"
#   PATTERN ".svn" EXCLUDE
# )

## Mark other files for installation (e.g. launch and bag files, etc.)
# install(FILES
#   # myfile1
#   # myfile2
#   DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
# )

#############
## Testing ##
#############

## Add gtest based cpp test target and link libraries
# catkin_add_gtest(${PROJECT_NAME}-test test/test_darwin_framework.cpp)
# if(TARGET ${PROJECT_NAME}-test)
#   target_link_libraries(${PROJECT_NAME}-test ${PROJECT_NAME})
# endif()

## Add folders to be run by python nosetests
# catkin_add_nosetests(test)
