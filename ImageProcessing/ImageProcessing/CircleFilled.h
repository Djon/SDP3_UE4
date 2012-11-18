///////////////////////////////////////////////////////////////////////////
// Workfile : CircleFilled.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for CircleFilled.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef CircleFilled_H
#define CircleFilled_H

#include <string>
#include "Circle.h"

class CircleFilled
	: public Circle
{
public:
	//Default CTor
	CircleFilled(size_t const& posX, size_t const& posY, size_t const& radius, std::string const& stroke, std::string const& fill);

	//virtual Destructor
	virtual ~CircleFilled();

	virtual void Write();
};

#endif