///////////////////////////////////////////////////////////////////////////
// Workfile : GraphicObject.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for GraphicObject.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef GRAPHICOBJECT_H
#define GRAPHICOBJECT_H

#include <string>
#include "Object.h"

class GraphicObject 
	: public Object
{
public:
	//Default CTor
	GraphicObject();

	//virtual Destructor
	virtual ~GraphicObject();

	virtual void Write();
private:
	string mFill;
	string mStroke;
	size_t nPosX;
	size_t nPosY;


	GraphicObject(GraphicObject const& s);
	GraphicObject& operator = (GraphicObject const& s);
};

#endif