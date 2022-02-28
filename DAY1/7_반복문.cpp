// 7_반복문    38page

#include <iostream>

int main()
{
	int x[5] = { 1,2,3,4,5 };

	// 기존의 for 문
	for (int i = 0; i < 5; i++)
	{
	}

	// 새로운 for 문 ( range-for, C++11)
	for (int e : x)
	{
		std::cout << e << ", ";
	}
}