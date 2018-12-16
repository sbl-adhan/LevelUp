#pragma once

#include <string>
#include "TwoDimensional.h"

class Circle : public TwoDimensional
{
public:
	Circle(std::string name, float radius);

	void SetRadius(float radius);
	float GetRadius() const { return mRadius; }

	float GetArea() const override { return mPie * mRadius * mRadius; }
	float GetPerimeter() const override { return 2.0f * mPie * mRadius; }

	void Print() const override;

private:
	float mRadius;
	const float mPie;
	
};