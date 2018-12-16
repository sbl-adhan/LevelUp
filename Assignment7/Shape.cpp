#include <iostream>

#include "Shape.h"

Shape::Shape(std::string name)
{
	mName = name;
}

void Shape::Print() const
{
	// Empty
}

float Shape::BelowZeroCheck(float number) const
{
	if (number < 0.0f)
	{
		std::cout << "ERROR - " << number << " Invaild. " << std::endl;
		return 0.0f;
	}
	return number;
}
