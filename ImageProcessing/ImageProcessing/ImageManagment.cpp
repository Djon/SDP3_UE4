#include <algorithm>
#include <iterator>
#include "ImageManagment.h"
#include "Image.h"

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
}

void ImageManagment::WriteSVG()
{
	std::for_each(mImageList.begin(),mImageList.end(),[](Image* img)
	{
		img->WriteSVG();
	});
}