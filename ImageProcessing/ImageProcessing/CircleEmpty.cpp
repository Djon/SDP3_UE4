///////////////////////////////////////////////////////////////////////////
// Workfile : CircleEmpty.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Implementation of class CircleEmpty
///////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "CircleEmpty.h"

CircleEmpty::CircleEmpty(size_t const& posX, size_t const& posY, size_t const& radius, std::string const& stroke)
{
	mPosX = posX;
	mPosY = posY;
	mRadius = radius;
	mStroke = stroke;
	mFill = empty;
}

void CircleEmpty::Write(std::ofstream& stream)
{
	try {
		Circle::Write(stream);
		if (!stream.is_open())
		{
			std::string ex("Stream couldn't be opened");
			throw(ex);
		}
		stream << space << fill << qM << mFill << qM << end << std::endl;
	}
	catch(std::string const& ex)
	{
		std::cerr << "CircleEmpty.cpp::Write: " << ex << std::endl;
	}
	catch(...)
	{
		std::cerr << "CircleEmpty.cpp::Write: Unknown Exception occured" << std::endl;
	}
}