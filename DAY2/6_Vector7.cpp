#include <iostream>

class Vector
{
	int* ptr;
	int size;
public:
	Vector(int sz)
	{
		size = sz;
		ptr = new int[size];
	}
	~Vector()
	{
		delete[] ptr;
	}

	void resize(int newsize)
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
	void setAt(int idx, int value) 
	{
		// 0 <= idx < size 를 조사하는 더욱 좋습니다.
		ptr[idx] = value;
	}

	int  getAt(int idx) { return ptr[idx]; }
};

int main()
{
	Vector v(5);

	v.setAt(0, 10); // v[0] = 10 의 의미
	v.setAt(1, 15); // v[1] = 15

	v.resize(10);

	std::cout << v.getAt(1) << std::endl; // 15
}