#include "ThreeDimensional.h"

ThreeDimensional::ThreeDimensional(std::string name)
	: Shape(name)
{
	// Empty
}

float ThreeDimensional::GetVolume() const
{
	return 0.0f;
}

float ThreeDimensional::GetSurfaceArea() const
{
	return 0.0f;
}
