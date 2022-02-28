// 9_레퍼런스1 => 41page 중요한 문법. 
#include <iostream>

int main()
{
	int  n = 10;
	int* p = &n;
	int& r = n;

	r = 20;

	std::cout << n << std::endl;
	std::cout << &n << std::endl;
	std::cout << &r << std::endl;
}