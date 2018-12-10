#pragma once

#include <string>

class Swapper
{
public:
	Swapper();
	void Run();

private:
	void Swap(int& int1, int& int2);
	void Swap(bool& bool1, bool& bool2);
	void Swap(std::string& string1, std::string& string2);
};

