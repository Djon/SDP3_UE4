///////////////////////////////////////////////////////////////////////////
// Workfile : RectangleEmpty.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for RectangleEmpty.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef RECTANGLEEMPTY_H
#define RECTANGLEEMPTY_H

#include <string>
#include "Rectangle.h"

class RectangleEmpty
	: public Rectangle
{
public:
	//Default CTor
	RectangleEmpty();

	//virtual Destructor
	virtual ~RectangleEmpty();

	virtual void Write();
};

#endif