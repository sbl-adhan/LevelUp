#pragma once

#include <string>
#include "Belt.h"
#include "Shoes.h"
#include "Laces.h"

class Human
{
public:
	Human(std::string name);
	Human(std::string name, int beltSize, std::string shoeColor);

private:
	Belt mBelt;
	Shoes mShoes;
	std::string mName;
};

