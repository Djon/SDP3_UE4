#include <fstream>
#include <iostream>
#include "Circle.h"

Circle::Circle() : mRadius(0)
{}

void Circle::Write(std::ofstream& stream)
{
	try {
		if (!stream.is_open())
		{
			std::string ex("Stream couldn't be opened");
			throw(ex);
		}

		stream << begin << circle << space
			   << cx << qM << mPosX << qM << space
			   << cy << qM << mPosY << qM << space
			   << radius << qM << mRadius << qM << space
			   << stroke << qM << mStroke << qM;
	}
	catch(std::string const& ex)
	{
		std::cerr << "Circle.cpp::Write: " << ex << std::endl;
	}
	catch(...)
	{
		std::cerr << "Circle.cpp::Write: Unknown Exception occured" << std::endl;
	}
}