#include "FilledGraphicObjectFactory.h"
#include "RectangleFilled.h"
#include "Image.h"

Rectangle* FilledGraphicObjectFactory::CreateRectangle(size_t const& posX, size_t const& posY, size_t const& height, size_t const& width, std::string const& stroke, std::string const& fill)
{
	return new RectangleFilled(posX, posY, height, width, stroke, fill);
}

Circle* FilledGraphicObjectFactory::CreateCircle(size_t const& posX, size_t const& posY, size_t const& radius, std::string const& stroke, std::string const& fill)
{
	return new CircleFilled();
}
