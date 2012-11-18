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

class GraphicObject 
	: public Object
{
public:
	//Default CTor
	GraphicObject();

	//virtual Destructor
	virtual ~GraphicObject();

	virtual void Write(std::ofstream& stream);
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