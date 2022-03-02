// Vector.cpp
#include "Vector.h"

Vector::Vector(int sz)
{
	size = sz;
	ptr = new int[size];
}
Vector::~Vector()
{
	delete[] ptr;
}
void Vector::resize(int newsize)
{
	if (size < newsize)
	{
		int* temp = new int[newsize];
		memcpy(temp, ptr, sizeof(int)*size);
		delete[] ptr;
		ptr = temp;
		size = newsize;

	}
}
void Vector::setAt(int idx, int value)
{
	ptr[idx] = value;
}
int  Vector::getAt(int idx)
{
	return ptr[idx];
}
