#ifndef MYIMAGE_HPP
#define MYIMAGE_HPP

#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <vector>

using namespace cv;
using namespace std;

class MyImage{

public:
    MyImage();
    MyImage(int webCamera);
    MyImage(string linkVideo);
    Mat src; // Load the image
    Mat srcLR; //ảnh này có kích thước =1/2 ảnh nguồn
    Mat bw; // Create binary image from source image
    vector<Mat> bwList;
    VideoCapture cap;
    int cameraSrc;
    void initWebCamera(int i);
};

#endif // MYIMAGE_HPP
