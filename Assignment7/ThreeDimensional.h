#pragma once

#include <string>
#include "Shape.h"

class ThreeDimensional : public Shape
{
public:
	ThreeDimensional(std::string name);

	virtual float GetVolume() const;
	virtual float GetSurfaceArea() const;
};