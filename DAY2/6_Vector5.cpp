#include <iostream>

class Vector
{
	// 1. ��� ����Ÿ�� � ���� �ʿ����� �� �����ϼ���.
	int* ptr;
	int size;
public:
	Vector(int sz)
	{
		size = sz;
		ptr = new int[size];
	}
	// �� ó�� �����ڿ��� �ڿ�(�޸�)�Ҵ��� ��� �Ҹ��ڸ� ����
	// �ڿ������� �ؾ� �մϴ�.
	~Vector()
	{
		delete[] ptr;
	}
};
int main()
{
	// �ٽ� : �Ʒ� ������ ����ɶ��� �޸𸮸� �׸��� �־�� �մϴ�.
	//        ������, �Ҹ��� �ڵ带 �� ���� ������.
	Vector v(5); 

//	v.resize(10);
}