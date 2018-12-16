#include <iostream>

#include "Circle.h"

Circle::Circle(std::string name, float radius)
	: TwoDimensional(name)
	, mPie(3.14f)
{
	SetRadius(radius);
}

void Circle::SetRadius(float radius)
{
	mRadius = BelowZeroCheck(radius);
}

void Circle::Print() const
{
	std::cout << "Perimeter: " << GetPerimeter() << std::endl;
	std::cout << "Area: " << GetArea() << std::endl;
}