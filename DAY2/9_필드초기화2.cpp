// 9_�ʵ��ʱ�ȭ2
#include <iostream>

int g = 10;

class Object
{
	int v1 = 0;
	int v2 = ++g;
public:
	Object() {}
	Object(int a, int b) : v1(a), v2(b) {}
};
int main()
{
	Object o1;
	Object o2(1, 2);

	std::cout << g << std::endl; //  �� ������ ������ ������.
}