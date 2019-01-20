#include "FloatArray.h"
#include <cstring>

void FloatArray::Add(float value)
{
	int size = mArraySize + 1;
	float* arr = new float[size];
	if (size == 1) {
		arr[0] = value;
	}
	else {
		memcpy(arr, mValues, sizeof(mValues));
		arr[mArraySize] = value;
		delete[] mValues;
	}
	mValues = arr;
	mArraySize = size;
}

void FloatArray::Remove(int index)
{
	if (mArraySize == 0) {
		return;
	}

	int size = mArraySize - 1;
	float* arr = new float[size];
	memcpy(arr, mValues, sizeof(arr));
	for (int i = index; i < size; i++) {
		arr[i] = mValues[i + 1];
	}
	delete mValues;
	mValues = arr;
	mArraySize = size;
}

float FloatArray::Get(int index)
{
	return mValues[index];
}
