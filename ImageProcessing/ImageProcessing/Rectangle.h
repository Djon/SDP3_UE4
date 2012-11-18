///////////////////////////////////////////////////////////////////////////
// Workfile : Rectangle.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for Rectangle.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
#include "GraphicObject.h"

class Rectangle 
	: public GraphicObject
{
public:
	//Default CTor
	Rectangle();

	//virtual Destructor
	virtual ~Rectangle();

	virtual void Write();
private:
	size_t mHeight;
	size_t mWidth;
};

#endif