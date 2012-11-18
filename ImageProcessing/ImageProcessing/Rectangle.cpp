#include <fstream>
#include <iostream>
#include "Rectangle.h"

void Rectangle::Write(std::ofstream& stream)
{
	try {
		if (!stream.is_open())
		{
			std::string ex("Stream couldn't be opened");
			throw(ex);
		}

		stream << begin << space 
			   << x << qM << mPosX << qM << space
			   << y << qM << mPosY << qM << space
			   << width << qM << mWidth << qM << space
			   << height << qM << mHeight << qM << space
			   << stroke << qM << mStroke << qM;
	}
	catch(std::string const& ex)
	{
		std::cerr << "Rectangle.cpp::Write: " << ex << std::endl;
	}
	catch(...)
	{
		std::cerr << "Rectangle.cpp::Write: Unknown Exception occured" << std::endl;
	}
}