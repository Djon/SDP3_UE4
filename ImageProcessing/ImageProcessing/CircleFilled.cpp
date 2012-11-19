#include <iostream>
#include "CircleFilled.h"

CircleFilled::CircleFilled(size_t const& posX, size_t const& posY, size_t const& radius, std::string const& stroke, std::string const& fill)
{
	mPosX = posX;
	mPosY = posY;
	mRadius = radius;
	mStroke = stroke;
	mFill = fill;
}

void CircleFilled::Write(std::ofstream& stream)
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
		std::cerr << "CircleFilled.cpp::Write: " << ex << std::endl;
	}
	catch(...)
	{
		std::cerr << "CircleFilled.cpp::Write: Unknown Exception occured" << std::endl;
	}
}