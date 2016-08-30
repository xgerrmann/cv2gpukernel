# Example repo for separating cuda (*.cu) code and normal c++ code.
# Makes use of Opencv (2.4).
Based on: http://www.programmerfish.com/how-to-write-a-custom-cuda-kernel-with-opencv-as-host-library/#.V8XH9dGY7CI

![Original image](image.jpg)
![Output image](output.png)

To make:

cd build

cmake ..

make

cd ..

./build/main
