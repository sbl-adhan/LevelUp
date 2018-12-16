#pragma once

#include <string>

#include "ThreeDimensional.h"

class Cube : public ThreeDimensional
{
public:
	Cube(std::string name, float width, float height, float depth);

	void SetWidth(float width);
	void SetHeight(float height);
	void SetDepth(float depth);

	float GetWidth() const { return mWidth; }
	float GetHeight() const { return mHeight; }
	float GetDepth() const { return mDepth; }

	float GetVolume() const override { return mWidth * mHeight * mDepth; }
	float GetSurfaceArea() const override { return (2.0f * mWidth * mHeight) + (2.0f * mHeight * mDepth) + (2.0f * mWidth * mDepth); }

	void Print() const override;

private:
	float mWidth;
	float mHeight;
	float mDepth;
};