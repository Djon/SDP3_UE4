#include <fstream>
#include <iostream>
#include "RectangleFilled.h"

RectangleFilled::RectangleFilled(size_t const& posX, size_t const& posY, size_t const& width, size_t const& height, std::string const& stroke, std::string const& fill)
{
	mPosX = posX;
	mPosY = posY;
	mWidth = width;
	mHeight = height;
	mStroke = stroke;
	mFill = fill;
}

void RectangleFilled::Write(std::string const& filename)
{
	try {
		Rectangle::Write(filename);
		
		std::ofstream file(filename);
		if (!file.is_open())
		{
			std::string ex("File couldn't be opened");
			throw(ex);
		}
		file << space << fill << qM << mFill << qM;
		file << end << std::endl;
		file.close();		
	}
	catch(std::string const& ex)
	{
		std::cerr << "RectangleFilled.cpp::Write: " << ex << std::endl;
	}
	catch(...)
	{
		std::cerr << "RectangleFilled.cpp::Write: Unknown Exception occured" << std::endl;
	}
}