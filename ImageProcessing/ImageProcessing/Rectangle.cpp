#include <fstream>
#include <iostream>
#include "Rectangle.h"

void Rectangle::Write(std::string const& filename)
{
	try {
		std::ofstream file(filename);
		if (!file.is_open())
		{
			std::string ex("Stream couldn't be opened");
			throw(ex);
		}

		file << begin << space 
			   << x << qM << mPosX << qM << space
			   << y << qM << mPosY << qM << space
			   << width << qM << mWidth << qM << space
			   << height << qM << mHeight << qM << space
			   << stroke << qM << mStroke << qM;

		//filled only when specified -> move to filled/empty
		if (mFill != "unspecified")
		{
			file << space << fill << qM << mFill << qM;
		}

		file << end << std::endl;
		file.close();
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