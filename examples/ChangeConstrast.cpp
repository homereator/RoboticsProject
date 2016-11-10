//#include <cv.h>
//#include <highgui.h>
//#include <iostream>
//#include <opencv2/opencv.hpp>
//
//using namespace cv;
//double alpha; //contrast control
//int beta; //brightness control
////Correct
//int main(int argc, char** argv)
//{
//	//read image given by the user
//	Mat image = imread( argv[1] );
//	Mat new_image = Mat::zeros( image.size(), image.type());
//
//	//initialize values
//
//	std::cout<<"Basic linear transforms"<<std::endl;
//	std::cout<<"--------------------------"<<std::endl;
//	std::cout<<"* Enter the alpha value [1.0-3.0]: "; std::cin>>alpha;
//	std::cout<<"* Enter the beta value [0-100]: "; std::cin>>beta;
//
//	// do the operation new_image(i,j) = alpha*image(i,j) + beta
//	for (int y=0; y <image.rows; y++)
//	{
//		for (int x =0; x<image.cols; x++ )
//		{
//			for (int c = 0; c<3; c++)
//			{
//				new_image.at<Vec3b>(y,x)[c] =saturate_cast<uchar>( alpha*( image.at<Vec3b>(y,x)[c] ) + beta );
//			}
//		}
//	}
//	//create windows
//	namedWindow("Original image", 1);
//	namedWindow("New Image", 1);
//
//	//show stuff
//	imshow("Original image", image);
//	imshow("New image", new_image);
//
//	//wait until user press some key
//	waitKey();
//	return 0;
//}
