///////////////////////////////////////////////////////////////////////////
// Workfile : FilledGraphicObjectFactory.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for FilledGraphicObjectFactory.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef FILLEDGRAPHICOBJECTFACTORY_H
#define FILLEDGRAPHICOBJECTFACTORY_H

#include "Circle.h"
#include "Rectangle.h"
#include "SingletonBase.h"
#include "IGraphicObjectFactory.h"

class FilledGraphicObjectFactory :
	public SingletonBase<FilledGraphicObjectFactory>,
	public IGraphicObjectFactory
{
	friend class SingletonBase<FilledGraphicObjectFactory>;
public:
	virtual Circle* CreateCircle(/*ToDo: Paramaters*/);
	virtual Rectangle* CreateRectangel(/*ToDo: Paramaters*/);
private:
	FilledGraphicObjectFactory();
};

#endif