///////////////////////////////////////////////////////////////////////////
// Workfile : main.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Testdriver for whole program
///////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

#include "SingletonBase.h"
#include "ImageManagment.h"
#include "FilledGraphicObjectFactory.h"
//#include "EmptyGraphicObjectFactory.h"
#include "Image.h"

int main()
{
	std::string filename1 = "Rect.data";
	std::string filename2 = "Circ.data";
	std::string filenameOutput = "test0.svg";

	ImageManagment& imgManager = ImageManagment::GetInstance();
	FilledGraphicObjectFactory& filledGraphicObjectFactory = FilledGraphicObjectFactory::GetInstance();
	imgManager.AddImage(filename1, filename2, filenameOutput, &filledGraphicObjectFactory);
	imgManager.WriteSVG();
	
	return 0;
}