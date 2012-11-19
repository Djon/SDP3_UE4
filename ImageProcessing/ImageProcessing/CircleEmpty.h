///////////////////////////////////////////////////////////////////////////
// Workfile : CircleEmpty.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for CircleEmpty.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef CIRCLEEMPTY_H
#define CIRCLEEMPTY_H

#include <string>
#include <fstream>
#include "Circle.h"

class CircleEmpty
	: public Circle
{
public:
	//CTor
	CircleEmpty(size_t const& posX, size_t const& posY, size_t const& radius, 
		std::string const& stroke);

	virtual void Write(std::ofstream& stream);
};

#endif