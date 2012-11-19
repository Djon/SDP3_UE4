#include "EmptyGraphicObjectFactory.h"
#include "RectangleEmpty.h"
#include "CircleEmpty.h"
#include "Image.h"

Rectangle* EmptyGraphicObjectFactory::CreateRectangle(size_t const& posX, size_t const& posY, 
	size_t const& width, size_t const& height, std::string const& stroke)
{
	return new RectangleEmpty(posX, posY, width, height, stroke);
}

Circle* EmptyGraphicObjectFactory::CreateCircle(size_t const& posX, size_t const& posY, 
	size_t const& radius, std::string const& stroke)
{
	return new CircleEmpty(posX, posY, radius, stroke);
}
