///////////////////////////////////////////////////////////////////////////
// Workfile : RectangleFilled.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for RectangleFilled.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef RECTANGLEFILLED_H
#define RECTANGLEFILLED_H

#include <string>
#include "Rectangle.h"

class RectangleFilled
	: public Rectangle
{
public:
	//Default CTor
	RectangleFilled();

	//virtual Destructor
	virtual ~RectangleFilled();

	virtual void Write();
};

#endif