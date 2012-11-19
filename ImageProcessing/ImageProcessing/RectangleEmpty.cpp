///////////////////////////////////////////////////////////////////////////
// Workfile : RectangleEmpty.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Implementation of class RectangleEmpty
///////////////////////////////////////////////////////////////////////////

#include <fstream>
#include <iostream>
#include "RectangleEmpty.h"

RectangleEmpty::RectangleEmpty(size_t const& posX, size_t const& posY, size_t const& width, 
	size_t const& height, std::string const& stroke)
{
	mPosX = posX;
	mPosY = posY;
	mWidth = width;
	mHeight = height;
	mStroke = stroke;
	mFill = empty;
}

void RectangleEmpty::Write(std::ofstream& stream)
{
	try {
		Rectangle::Write(stream);
		if (!stream.is_open())
		{
			std::string ex("Stream couldn't be opened");
			throw(ex);
		}
		stream << space << fill << qM << mFill << qM << end << std::endl;
	}
	catch(std::string const& ex)
	{
		std::cerr << "RectangleEmpty.cpp::Write: " << ex << std::endl;
	}
	catch(...)
	{
		std::cerr << "RectangleEmpty.cpp::Write: Unknown Exception occured" << std::endl;
	}
}