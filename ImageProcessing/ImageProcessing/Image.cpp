#include <fstream>
#include <iostream>
#include <sstream>
#include "Image.h"

Image::Image(std::string const& str, IGraphicObjectFactory* factory)
{
	mFileNameSVG = str;
	mFactory = factory;
}

void Image::WriteSVG()
{
	try {
		std::ofstream file(mFileNameSVG);
		if (!file.is_open())
		{
			std::string ex("File couldn't be opened");
			throw(ex);
		}

		file << version << std::endl << link << std::endl;

		TGraphicObjectsItor itor = mGraphicObjects.begin();
		for(;itor != mGraphicObjects.end(); ++itor)
		{
			(*itor)->Write(file);
		}

		file << endSVG;
		file.close();
	}
	catch(std::string const& ex)
	{
		std::cerr << "Image.cpp::WriteSVG: " << ex << std::endl;
	}
	catch(...)
	{
		std::cerr << "Image.cpp::WriteSVG: Unknown Exception occured" << std::endl;
	}
}

void Image::ReadData(std::string const& filename1,std::string const& filename2)
{
	try
	{
		std::ifstream file1(filename1);	//rectangle
		std::string buffer;
		
		//help variables
		size_t pos = 0;	//position of " " in string
		size_t posX = 0;
		size_t posY = 0;
		size_t width = 0;
		size_t height = 0;
		size_t radius = 0;
		std::string stroke = "";
		std::string fill = "";
		
		if (!file1.is_open())
		{
			std::string ex("File with Rectangle Data couldn't be opened");
			throw(ex);
		}

		//rectangle
		while(!file1.eof())
		{
			getline(file1,buffer);
			// not an empty string
			if (buffer != "")	
			{
				//posX
				pos = buffer.find_first_of(' ');
				std::stringstream (buffer.substr(0,pos)) >> posX;
				buffer.erase(0,pos+1);

				//posY
				pos = buffer.find_first_of(' ');
				std::stringstream (buffer.substr(0,pos)) >> posY;
				buffer.erase(0,pos+1);

				//width
				pos = buffer.find_first_of(' ');
				std::stringstream (buffer.substr(0,pos)) >> width;
				buffer.erase(0,pos+1);

				//height
				pos = buffer.find_first_of(' ');
				std::stringstream (buffer.substr(0,pos)) >> height;
				buffer.erase(0,pos+1);

				//stroke
				pos = buffer.find_first_of(' ');
				stroke = buffer.substr(0,pos);
				buffer.erase(0,pos+1);

				//fill exists or doesnt exist
				if (buffer != "")
				{
					fill = stroke;
				}
				else
				{
					std::stringstream(buffer.substr(0,pos)) >> fill;
				}
				mFactory->CreateRectangle(posX,posY,width,height,stroke,fill);
			}
		}
		file1.close();

		//circle
		std::ifstream file2(filename2);
		if (!file2.is_open())
		{
			std::string ex("File with Circle Data couldn't be opened");
			throw(ex);
		}

		//circle
		while(!file2.eof())
		{
			getline(file2,buffer);
			// not an empty string
			if (buffer != "")	
			{
				//posX
				pos = buffer.find_first_of(' ');
				std::stringstream (buffer.substr(0,pos)) >> posX;
				buffer.erase(0,pos+1);

				//posY
				pos = buffer.find_first_of(' ');
				std::stringstream (buffer.substr(0,pos)) >> posY;
				buffer.erase(0,pos+1);

				//radius
				pos = buffer.find_first_of(' ');
				std::stringstream (buffer.substr(0,pos)) >> radius;
				buffer.erase(0,pos+1);

				//stroke
				pos = buffer.find_first_of(' ');
				stroke = buffer.substr(0,pos);
				buffer.erase(0,pos+1);

				//fill exists or doesnt exist
				if (buffer != "")
				{
					fill = stroke;	//if doesnt exist it gets color of stroke
				}
				else
				{
					std::stringstream(buffer.substr(0,pos)) >> fill;
				}
				mFactory->CreateCircle(posX,posY,radius,stroke,fill);
			}
		}
		file2.close();
	}
	catch(std::string const& ex)
	{
		std::cerr << "Image.cpp::ReadData: " << ex << std::endl;
	}
	catch(...)
	{
		std::cerr << "Image.cpp::ReadData: Unknown Exception occured" << std::endl;
	}
}