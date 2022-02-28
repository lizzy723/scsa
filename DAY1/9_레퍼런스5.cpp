#include <iostream>

int main()
{
	int x[5] = { 1,2,3,4,5 };

	for (int e : x)
	{
		e = 0; // 이 코드를 생각해 봅시다.
	}

	for (int e : x)
		std::cout << e << ", ";
}