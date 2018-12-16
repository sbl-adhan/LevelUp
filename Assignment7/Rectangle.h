#pragma once

#include <string>

#include"TwoDimensional.h"

class Rectangle : public TwoDimensional
{
public:
	Rectangle(std::string name, float width, float height);

	void SetWidth(float width);
	void SetHeight(float height);

	float GetWidth() const  { return mWidth; }
	float GetHeight() const  { return mHeight; }

	virtual float GetArea() const override { return mWidth * mHeight; }
	virtual float GetPerimeter() const override { return (mWidth * 2.0f) + (mHeight * 2.0f); }

	void Print() const override;

private:
	float mWidth;
	float mHeight;
};