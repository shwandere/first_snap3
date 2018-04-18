#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core/mat.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv/cv.hpp>
#include <opencv2/core.hpp>
using namespace cv;
using namespace std;

int main()
{
	cout << "Hi! this is first snap to read image using opencv" << endl;
    Mat img;
    img = imread("image.jpg",0);
    imwrite("img1.jpg",img);
    //imshow("img",img);
    //waitKey();	
    return 0;
}
