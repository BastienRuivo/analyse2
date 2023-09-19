#include <iostream>

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

int main () {
    auto im = cv::imread("../data/where_is_waldo.png");
    auto template = cv::imread("../data/template1.png");
    
    
}