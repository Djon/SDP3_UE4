///////////////////////////////////////////////////////////////////////////
// Workfile : IGraphicObjectFactory.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : GraphicObjectFactory interface
///////////////////////////////////////////////////////////////////////////

#ifndef IGRAPHICOBJECTFACTORY_H
#define IGRAPHICOBJECTFACTORY_H

#include "Circle.h"
#include "Rectangle.h"

class IGraphicObjectFactory
{
public:
	virtual Circle* CreateCircle(/*ToDo: Paramaters*/);
	virtual Rectangle* CreateRectangel(/*ToDo: Paramaters*/);
};

#endif