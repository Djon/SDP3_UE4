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

typedef std::list<GraphicObject*> TGraphicObjects;
typedef TGraphicObjects::const_iterator TGraphicObjectsItor;

std::string const version = "<?xml version=\"1.0\"?>";
std::string const link = "<svg xmlns=\"http://www.w3.org/2000/svg\">";
std::string const endSVG = "</svg>";

class Image 
	: public Object
{
public:
	//Default CTor
	Image(std::string const& str, IGraphicObjectFactory* factory);

	//virtual Destructor
	virtual ~Image();

	void WriteSVG();
	void ReadData(std::string const& filename1,std::string const& filename2);
private:
	std::string mFileNameSVG;
	IGraphicObjectFactory* mFactory;
	TGraphicObjects mGraphicObjects;
};

#endif