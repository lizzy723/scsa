// 4_�Լ�6-1
#include <iostream>

/*
int add(int a, int b)
{
	return a + b;
}
*/
template<typename T>
T add(T a, T b)
{
	return a + b;
}

int main()
{
	std::cout << add(1,   2)   << std::endl;
	std::cout << add(1.1, 2.2) << std::endl; 

//	std::cout << add(1, 2.2) << std::endl; // ���ø� ���ڴ� T, T �ε�
									// 1, 2��° ������ Ÿ���� �ٸ��Ƿ�
									// �����Ϸ��� T Ÿ�� ���� ����. error

	// �Ʒ� ó�� Ÿ�� ���ڸ� �����ϸ� ���� �ƴ�
	std::cout << add<double>(1, 2.2) << std::endl;
}

