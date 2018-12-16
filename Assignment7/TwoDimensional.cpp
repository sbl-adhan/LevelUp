#include "TwoDimensional.h"

TwoDimensional::TwoDimensional(std::string name)
	: Shape(name)
{
	// Empty
}

float TwoDimensional::GetArea() const
{
	return 0.0f;
}

float TwoDimensional::GetPerimeter() const
{
	return 0.0;
}
