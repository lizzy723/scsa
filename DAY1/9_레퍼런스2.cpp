// 9_���۷���2 - 43page 
#include <iostream>

void inc1(int n)  { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 10, b = 10, c = 10;

	inc1(a); // call by value, ���纻�� ����, 
			 // ���� a �� ���� �ȵ�. ����

	inc2(&b);// call by pointer
			 // ���� b ����. ����!
	
	inc3(c); // call by reference
			 // ���� c ����. ���� !

	std::cout << a << std::endl; // 10
	std::cout << b << std::endl; // 11
	std::cout << c << std::endl; // 11
}
// �����Ϳ� ���۷����� ������ Ư¡�� �ֽ��ϴ�.
// �Լ� ���ڷ� ���� ��� ������ �����Ҽ� �ֽ��ϴ�.

// �׷���, ���۷����� ����, �����մϴ�.

void f1(int* p)
{
	// ������ ���� ������ �ڵ�� �ۼ��Ϸ���
	if (p != 0) // �̷��� �ؾ� �մϴ�.
	{
		*p = 10;
	}
}
f1(0); // �� �ڵ尡 �����մϴ�.

void f2(int& r)
{
	r = 10;  // 2.�׷��� �� �ڵ�� �׻� �����մϴ�.
}
f2(0); // error. 1. �ݵ�� ������ ������ �մϴ�.!!