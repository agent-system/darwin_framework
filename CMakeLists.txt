cmake_minimum_required(VERSION 2.8.3)
project(darwin_framework)

find_package(catkin REQUIRED)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES darwin_framework
)

include_directories(include)

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
  src/minIni/minIni.c
)

#############
## Install ##
#############

install(TARGETS darwin_framework
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
  FILES_MATCHING PATTERN "*.h"
  PATTERN ".svn" EXCLUDE
)
