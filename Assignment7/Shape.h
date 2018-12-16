#pragma once

#include <string>

class Shape
{
public:
	Shape(std::string name);

	std::string& GetName() { return mName; }
	void SetName(std::string name) { mName = name; }

	virtual void Print() const;
	float BelowZeroCheck(float number) const;

private:
	std::string mName;
};