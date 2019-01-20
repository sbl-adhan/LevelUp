#pragma once
class FloatArray
{
public:
	void Add(float value);
	void Remove(int index);
	float Get(int index);

private:
	int mArraySize = 0;
	float* mValues = nullptr;
};

