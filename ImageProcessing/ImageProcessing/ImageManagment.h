///////////////////////////////////////////////////////////////////////////
// Workfile : ImageManagment.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for ImageManagment.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef IMAGEMANAGMENT_H
#define IMAGEMANAGMENT_H

#include <string>
#include <list>
#include "SingletonBase.h"
#include "Image.h"

class ImageManagment 
	: public SingletonBase<ImageManagment>
{
	friend class SingletonBase<ImageManagment>;
public:
	//virtual Destructor
	virtual ~ImageManagment();

	void AddImage(std::string const& filename1, std::string const& filename2, 
		std::string const& SVGFileName, IGraphicObjectFactory* factory);

	void WriteSVG();
private:
	std::list<Image*> mImageList;

	//Default CTor
	ImageManagment();
};

#endif