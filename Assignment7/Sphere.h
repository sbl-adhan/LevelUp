#pragma once

#include <string>

#include "ThreeDimensional.h"

class Sphere : public ThreeDimensional
{
public:
	Sphere(const std::string& name, float radius);
	void SetRadius(float radius);
	float GetRadius() const { return mRadius; }

	float GetVolume() const override { return 4.0f * mPie * mRadius * mRadius * mRadius / 3.0f; }
	float GetSurfaceArea() const override { return 4.0f * mPie * mRadius * mRadius; }

	void Print() const override;

private:
	float mRadius;
	const float mPie;
};