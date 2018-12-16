#include <iostream>

#include "Rectangle.h"

Rectangle::Rectangle(std::string name, float width, float height)
	: TwoDimensional(name)
	, mWidth(0.0f)
	, mHeight(0.0f)
{
	SetWidth(width);
	SetHeight(height);
}

void Rectangle::SetWidth(float width)
{
	mWidth = BelowZeroCheck(width);
}

void Rectangle::SetHeight(float height)
{
	mHeight = BelowZeroCheck(height);
}

void Rectangle::Print() const
{
	std::cout << "Perimeter: " << GetPerimeter() << std::endl;
	std::cout << "Area: " << GetArea() << std::endl;
}