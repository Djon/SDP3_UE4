///////////////////////////////////////////////////////////////////////////
// Workfile : ImageManagment.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Implementation of class ImageManagment
///////////////////////////////////////////////////////////////////////////

#include <algorithm>
#include <iterator>
#include "ImageManagment.h"
#include "Image.h"

#include <iostream>

ImageManagment::ImageManagment() {}

ImageManagment::~ImageManagment()
{
	std::for_each(mImageList.begin(),mImageList.end(),[](Image* img)
	{
		delete img;
	});
}

void ImageManagment::AddImage(std::string const& filename1, std::string const& filename2, 
	std::string const& SVGFileName, IGraphicObjectFactory* factory)
{
	Image* img = new Image(SVGFileName, factory);

	img->ReadData(filename1,filename2);
	mImageList.push_back(img);
}

void ImageManagment::WriteSVG()
{
	std::cout << *(mImageList.begin()) << std::endl;
	std::for_each(mImageList.begin(),mImageList.end(),[](Image* img)
	{
		img->WriteSVG();
	});
}