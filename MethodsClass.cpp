#include "MethodsClass.h"

#include<opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;


//This class contains methods we want to invoke from the main function



void MethodsClass::substractTwoImages() 
{
    Mat img1 = imread("D:\\OpenCV\\img.jpg");
    Mat img2 = imread("D:\\OpenCV\\img2.jpg");
    Mat result;

    subtract(img1, img2, result);


    namedWindow("image", WINDOW_NORMAL);
    imshow("image", result);
    waitKey(0);

}
void MethodsClass::ResizeImage() 
{
    Mat img1 = imread("D:\\OpenCV\\img.jpg");
    Size size(200, 200);
    Mat dest;
    resize(img1, dest, size);
    imshow("image1", img1);
    imshow("resized image", dest);
    waitKey(0);
}

void MethodsClass::BlobDetection()
{
    Mat im = imread("D:\\OpenCV\\img.jpg", IMREAD_GRAYSCALE);
    
    // set up the detector with default parameters
    SimpleBlobDetector detector;
    

    std::vector<KeyPoint> keypoints;
    detector.detect(im, keypoints);

    Mat im_with_keypoints;
    drawKeypoints(im,keypoints,im_with_keypoints,Scalar(0, 0, 255), DrawMatchesFlags::DRAW_RICH_KEYPOINTS );

    // Show blobs
        
        imshow("keypoints", im_with_keypoints);
            
        waitKey(0);

}





/*

class MethodsClass {

    public:

     void substractTwoImages()
    {
        Mat img1 = imread("D:\\OpenCV\\img.jpg");
        Mat img2 = imread("D:\\OpenCV\\img2.jpg");
        Mat result;

        subtract(img1, img2, result);


        namedWindow("image", WINDOW_NORMAL);
        imshow("image", result);
        waitKey(0);
    }

    void ResizeImage()
    {
        Mat img1 = imread("D:\\OpenCV\\img.jpg");
        Size size(200, 200);
        Mat dest;
        resize(img1, dest, size);
        imshow("image1", img1);
        imshow("resized image", dest);
        waitKey(0);

    }

};

*/