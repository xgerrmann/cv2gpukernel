#include<iostream>
#include<cstdio>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<cuda_runtime.h>

using std::cout;
using std::endl;

#define SAFE_CALL(call,msg) _safe_cuda_call((call),(msg),__FILE__,__LINE__)
static inline void _safe_cuda_call(cudaError err, const char* msg, const char* file_name, const int line_number);

__global__ void bgr_to_gray_kernel( unsigned char* input,
									unsigned char* output,
									int width,
									int height,
									int colorWidthStep,
									int grayWidthStep);

void convert_to_gray(const cv::Mat& input, cv::Mat& output);

