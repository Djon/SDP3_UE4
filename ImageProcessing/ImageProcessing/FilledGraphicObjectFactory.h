///////////////////////////////////////////////////////////////////////////
// Workfile : FilledGraphicObjectFactory.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.11.2012
// Description : Header for FilledGraphicObjectFactory.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef FILLEDGRAPHICOBJECTFACTORY_H
#define FILLEDGRAPHICOBJECTFACTORY_H

#include <string>
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
	Rectangle* CreateRectangle(size_t const& posX, size_t const& posY, size_t const& width, 
		size_t const& height, std::string const& stroke, std::string const& fill);
	Circle* CreateCircle(size_t const& posX, size_t const& posY, size_t const& radius, 
		std::string const& stroke, std::string const& fill);
private:
	FilledGraphicObjectFactory();
};

#endif