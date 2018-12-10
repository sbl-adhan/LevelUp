#pragma once

#include <string>
#include "Laces.h"

class Shoes
{
public:
	Shoes();
	Shoes(std::string color);

private:
	std::string mColour;
	Laces mLaces;
};

