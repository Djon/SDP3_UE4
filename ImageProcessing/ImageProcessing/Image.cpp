#include <fstream>
#include <iostream>
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
		file.close();

		//achtung: file wird da wieder geöffnet
		TGraphicObjectsItor itor = mGraphicObjects.begin();
		for(;itor != mGraphicObjects.end(); ++itor)
		{
			(*itor)->Write(mFileNameSVG);
		}

		file.open(mFileNameSVG);
		if (!file.is_open())
		{
			std::string ex("File couldn't be opened");
			throw(ex);
		}
		file << end;
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

void ReadData(std::string const& filename1,std::string const& filename2)
{
	try
	{
		/*std::ifstream file(filename);
		std::string buffer;
		size_t pos = 0;	//help variable

		if (!file.is_open())
		{
			std::string ex("File couldn't be opened");
			throw(ex);
		}

		if (!adressManager->IsAdressListEmpty())
		{
			adressManager->ClearAdressList();
		}

		while(!file.eof())
		{
			getline(file,buffer);
			// not an empty string
			if ((buffer != "") && (buffer[0] != '#'))	
			{
				Adress* adress = new Adress;

				pos = buffer.find_first_of(' ');
				adress->SetStreet(buffer.substr(0,pos));
				buffer.erase(0,pos+1);

				pos = buffer.find_first_of(' ');
				size_t houseNumber;
				std::stringstream (buffer) >> houseNumber;
				adress->SetHouseNumber(houseNumber);
				buffer.erase(0,pos+1);

				pos = buffer.find_first_of(' ');
				adress->SetCity(buffer.substr(0,pos));
				buffer.erase(0,pos+1);

				pos = buffer.find_first_of(' ');
				size_t zipCode;
				std::stringstream (buffer) >> zipCode;
				adress->SetZipCode(houseNumber);

				adressManager->AddAdress(adress);
			}
		}
		file.close();*/
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