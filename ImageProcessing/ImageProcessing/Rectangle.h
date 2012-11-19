///////////////////////////////////////////////////////////////////////////
// Workfile : Rectangle.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for Rectangle.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <fstream>
#include "GraphicObject.h"

std::string const rect = "rect";
std::string const x = "x=";
std::string const y = "y=";
std::string const width = "width=";
std::string const height = "height=";

class Rectangle 
	: public GraphicObject
{
public:
	//Default CTor
	Rectangle();

	virtual void Write(std::ofstream& stream);
protected:
	size_t mHeight;
	size_t mWidth;
};

#endif	//RECTANGLE_H