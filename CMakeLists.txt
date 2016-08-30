cmake_minimum_required(VERSION 2.8)
# About this project
#-------------------
project(cv2gpukernel)

message("${PROJECT_NAME}")

### CUDA
find_package(CUDA REQUIRED)

# Create binaries
#-------------------
cuda_add_executable(main main.cpp cudafuncs.cu)

# OPENCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

## Linker
##-------------------
target_link_libraries(main	${OpenCV_LIBS}	${CUDA_LIBRARIES})
