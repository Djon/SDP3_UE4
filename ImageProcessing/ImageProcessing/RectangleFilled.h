///////////////////////////////////////////////////////////////////////////
// Workfile : RectangleFilled.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for RectangleFilled.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef RECTANGLEFILLED_H
#define RECTANGLEFILLED_H

#include <string>
#include <fstream>
#include "Rectangle.h"

class RectangleFilled
	: public Rectangle
{
public:
	//CTor
	RectangleFilled(size_t const& posX, size_t const& posY, size_t const& height, 
		size_t const& width, std::string const& stroke, std::string const& fill);

	void Write(std::ofstream& stream);
};

#endif