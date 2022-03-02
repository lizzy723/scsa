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
		// 아래 코드 꼭 메모리 그림 그리면서 확인해 보세요
		// C/C++은 결국 메모리 그림을 그릴수 있어야 합니다.
		if (size < newsize)
		{
			int* temp = new int[newsize];
			memcpy(temp, ptr, sizeof(int)*size);
			delete[] ptr;
			ptr = temp;
			size = newsize;

		}
	}
};
int main()
{
	Vector v(5);

	v.resize(10);
}