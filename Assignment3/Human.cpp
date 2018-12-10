#include "Human.h"

Human::Human(std::string name) 
	: mName(name)
{
}


Human::Human(std::string name, int beltSize, std::string shoeColor)
	: mName(name)
	, mBelt(beltSize)
	, mShoes(shoeColor)

{
}
