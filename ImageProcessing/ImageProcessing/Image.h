///////////////////////////////////////////////////////////////////////////
// Workfile : Image.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for Image.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef IMAGE_H
#define IMAGE_H

#include <string>
#include <list>
#include "Object.h"
#include "IGraphicObjectFactory.h"
#include "GraphicObject.h"

class Image 
	: public Object
{
public:
	//Default CTor
	Image(std::string const& str/*Keine Ahnung mehr was des ist*/, IGraphicObjectFactory* factory);

	//virtual Destructor
	virtual ~Image();

	void WriteSVG();
	void ReadData(std::string const& filename1,std::string const& filename2);
private:
	string mFileNameSVG;
	IGraphicObjectFactory* mFactory;
	std::list<GraphicObject*> mGraphicObjects;
};

#endif