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
		// �Ʒ� �ڵ� �� �޸� �׸� �׸��鼭 Ȯ���� ������
		// C/C++�� �ᱹ �޸� �׸��� �׸��� �־�� �մϴ�.
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