#include "CircleFilled.h"

CircleFilled::CircleFilled(size_t const& posX, size_t const& posY, size_t const& radius, std::string const& stroke, std::string const& fill)
{
	mPosX = posX;
	mPosY = posY;
	mRadius = radius;
	mStroke = stroke;
	mFill = fill;
}