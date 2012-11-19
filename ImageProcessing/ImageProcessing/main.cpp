///////////////////////////////////////////////////////////////////////////
// Workfile : main.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Testdriver for whole program
///////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "SingletonBase.h"
#include "ImageManagment.h"
#include "IGraphicObjectFactory.h"
#include "FilledGraphicObjectFactory.h"
#include "EmptyGraphicObjectFactory.h"

using namespace std;


void testfunction(string filename1, string filename2, string SVGFilename, string Header)
{
	ImageManagment& imgManager = ImageManagment::GetInstance();
	FilledGraphicObjectFactory& filledGraphicObjectFactory = FilledGraphicObjectFactory::GetInstance();
	EmptyGraphicObjectFactory& emptyGraphicObjectFactory = EmptyGraphicObjectFactory::GetInstance();

	cout << Header << endl;

	cout << "AddImage(Filled) ... ";
	imgManager.AddImage(filename1, filename2, "Filled_"+SVGFilename, &filledGraphicObjectFactory);
	cout << "done" << endl;

	cout << "AddImage(Empty) ... ";
	imgManager.AddImage(filename1, filename2, "Empty_"+SVGFilename, &emptyGraphicObjectFactory);
	cout << "done" << endl;

	cout << "WriteSVG ... ";
	imgManager.WriteSVG();
	cout << "done" << endl;

	cout << endl << endl;
}

int main()
{
	testfunction("NULL","NULL","Testcase0_NotHere.svg",
		"Testcase0: Not existing files");

	testfunction("EmptyRect.data","EmptyCircle.data","Testcase1_EmptyFile.svg",
		"Testcase1: Empty files");

	testfunction("Rect.data","Circle.data","Testcase2_FilledFile.svg",
		"Testcase2: Files with correct data");

	testfunction("Rect_Wrong.data","Circle_Wrong.data","Testcase3_Filled_File_Wrong_Data.svg",
		"Testcase3: Files with wrong data");

	return 0;
}