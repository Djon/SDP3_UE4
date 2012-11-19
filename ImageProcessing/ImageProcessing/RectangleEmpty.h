///////////////////////////////////////////////////////////////////////////
// Workfile : RectangleEmpty.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for RectangleEmpty.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef RECTANGLEEMPTY_H
#define RECTANGLEEMPTY_H

#include <string>
#include <fstream>
#include "Rectangle.h"

class RectangleEmpty
	: public Rectangle
{
public:
	//CTor
	RectangleEmpty(size_t const& posX, size_t const& posY, size_t const& height, 
		size_t const& width, std::string const& stroke);

	virtual void Write(std::ofstream& stream);
};

#endif