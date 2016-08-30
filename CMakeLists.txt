cmake_minimum_required(VERSION 2.8.4)
# About this project
#-------------------
project(cv2gpukernel)

message("${PROJECT_NAME}")

# Add headers and source files here
#-------------------
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(BUILD_SHARED_LIBS OFF)

### CUDA
find_package(CUDA REQUIRED)
list(APPEND CUDA_NVCC_FLAGS "-arch=sm_20;-std=c++11;")
SET(CUDA_PROPAGATE_HOST_FLAGS OFF)

# Create binaries
#-------------------
cuda_add_executable(cv2gpukernel main.cpp cudafuncs.cu)

# OPENCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

## Linker
##-------------------
# homography
target_link_libraries(cv2gpukernel	${OpenCV_LIBS}	${CUDA_LIBRARIES})
