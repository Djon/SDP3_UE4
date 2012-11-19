///////////////////////////////////////////////////////////////////////////
// Workfile : Circle.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for Circle.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
#include <fstream>
#include "GraphicObject.h"

std::string const circle = "circle";
std::string const cx = "cx=";
std::string const cy = "cy=";
std::string const radius = "r=";

class Circle 
	: public GraphicObject
{
public:
	//Default CTor
	Circle();

	virtual void Write(std::ofstream& stream);
protected:
	size_t mRadius;
};

#endif