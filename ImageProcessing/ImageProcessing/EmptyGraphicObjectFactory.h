///////////////////////////////////////////////////////////////////////////
// Workfile : EmptyGraphicObjectFactory.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for EmptyGraphicObjectFactory.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef EMPTYGRAPHICOBJECTFACTORY_H
#define EMPTYGRAPHICOBJECTFACTORY_H

#include "Circle.h"
#include "Rectangle.h"
#include "SingletonBase.h"
#include "IGraphicObjectFactory.h"

class EmptyGraphicObjectFactory :
	public SingletonBase<EmptyGraphicObjectFactory>,
	public IGraphicObjectFactory
{
	friend class SingletonBase<EmptyGraphicObjectFactory>;
public:
	virtual Circle* CreateCircle(/*ToDo: Paramaters*/);
	virtual Rectangle* CreateRectangel(/*ToDo: Paramaters*/);
private:
	EmptyGraphicObjectFactory();
};

#endif