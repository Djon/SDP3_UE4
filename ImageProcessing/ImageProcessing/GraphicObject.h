///////////////////////////////////////////////////////////////////////////
// Workfile : GraphicObject.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for GraphicObject.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef GRAPHICOBJECT_H
#define GRAPHICOBJECT_H

#include <string>
#include <fstream>
#include "Object.h"

std::string const begin = "<";
std::string const stroke = "stroke=";
std::string const fill = "fill=";
std::string const end = "/>";
std::string const space = " ";
std::string const qM = "\"";	//Quotation Mark
std::string const empty("none");

class GraphicObject 
	: public Object
{
public:
	//Default CTor
	GraphicObject();

	virtual void Write(std::ofstream& stream) = 0;
protected:
	std::string mFill;
	std::string mStroke;
	size_t mPosX;
	size_t mPosY;

private:
	GraphicObject(GraphicObject const& s);
	GraphicObject& operator = (GraphicObject const& s);
};

#endif