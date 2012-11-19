///////////////////////////////////////////////////////////////////////////
// Workfile : CircleFilled.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for CircleFilled.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef CircleFilled_H
#define CircleFilled_H

#include <string>
#include <fstream>
#include "Circle.h"

class CircleFilled
	: public Circle
{
public:
	//CTor
	CircleFilled(size_t const& posX, size_t const& posY, size_t const& radius, 
		std::string const& stroke, std::string const& fill);

	virtual void Write(std::ofstream& stream);
};

#endif