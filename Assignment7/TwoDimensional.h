#pragma once

#include "Shape.h"

class TwoDimensional : public Shape
{
public:
	TwoDimensional(std::string name);

	virtual float GetArea() const;
	virtual float GetPerimeter() const;
};