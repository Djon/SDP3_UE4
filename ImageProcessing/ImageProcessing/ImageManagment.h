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
	//Default CTor
	ImageManagment();

	//virtual Destructor
	virtual ~Image();

	void AddImage(string const& filename1, string const& filename2, 
		string const& SVGFileName, IGraphicobjectFactory* factory);
private:
	std::list<Image*> mImageList;
};

#endif