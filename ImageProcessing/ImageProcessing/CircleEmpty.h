///////////////////////////////////////////////////////////////////////////
// Workfile : CircleEmpty.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for CircleEmpty.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef CIRCLEEMPTY_H
#define CIRCLEEMPTY_H

#include <string>
#include "Circle.h"

class CircleEmpty
	: public Circle
{
public:
	//Default CTor
	CircleEmpty();

	//virtual Destructor
	virtual ~CircleEmpty();

	virtual void Write();
};

#endif