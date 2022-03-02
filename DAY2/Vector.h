#pragma once

// Vector.h
class Vector
{
	int* ptr;
	int size;
public:
	Vector(int sz);
	~Vector();

	void resize(int newsize);
	void setAt(int idx, int value);
	int  getAt(int idx);
};
