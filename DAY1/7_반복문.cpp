// 7_�ݺ���    38page

#include <iostream>

int main()
{
	int x[5] = { 1,2,3,4,5 };

	// ������ for ��
	for (int i = 0; i < 5; i++)
	{
	}

	// ���ο� for �� ( range-for, C++11)
	for (int e : x)
	{
		std::cout << e << ", ";
	}
}