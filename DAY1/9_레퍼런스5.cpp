#include <iostream>

int main()
{
	int x[5] = { 1,2,3,4,5 };

	for (int e : x)
	{
		e = 0; // �� �ڵ带 ������ ���ô�.
	}

	for (int e : x)
		std::cout << e << ", ";
}