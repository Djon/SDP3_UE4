///////////////////////////////////////////////////////////////////////////
// Workfile : Circle.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for Circle.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
#include "GraphicObject.h"

class Circle 
	: public GraphicObject
{
public:
	//Default CTor
	Circle();

	//virtual Destructor
	virtual ~Circle();

	virtual void Write();
private:
	size_t mRadius;
};

#endif