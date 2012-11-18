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
	virtual Rectangle* CreateRectangle(size_t const& posX, size_t const& posY, size_t const& width, size_t const& height, std::string const& stroke, std::string const& fill) = 0;
	virtual Circle* CreateCircle(size_t const& posX, size_t const& posY, size_t const& radius, std::string const& stroke, std::string const& fill) = 0;
};

#endif