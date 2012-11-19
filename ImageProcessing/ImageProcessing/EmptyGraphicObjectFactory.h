///////////////////////////////////////////////////////////////////////////
// Workfile : EmptyGraphicObjectFactory.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for EmptyGraphicObjectFactory.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef EMPTYGRAPHICOBJECTFACTORY_H
#define EMPTYGRAPHICOBJECTFACTORY_H

#include <string>
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
	Rectangle* CreateRectangle(size_t const& posX, size_t const& posY, size_t const& width, 
		size_t const& height, std::string const& stroke);
	Circle* CreateCircle(size_t const& posX, size_t const& posY, 
		size_t const& radius, std::string const& stroke);
private:
	EmptyGraphicObjectFactory();
};

#endif