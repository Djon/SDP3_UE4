#include "FilledGraphicObjectFactory.h"
#include "RectangleFilled.h"
#include "CircleFilled.h"
#include "Image.h"

FilledGraphicObjectFactory::FilledGraphicObjectFactory() {}

Rectangle* FilledGraphicObjectFactory::CreateRectangle(size_t const& posX, size_t const& posY, size_t const& width, 
	size_t const& height, std::string const& stroke, std::string const& fill)
{
	return new RectangleFilled(posX, posY, width, height, stroke, fill);
}

Circle* FilledGraphicObjectFactory::CreateCircle(size_t const& posX, size_t const& posY, size_t const& radius, 
	std::string const& stroke, std::string const& fill)
{
	return new CircleFilled(posX, posY, radius, stroke, fill);
}
