// 9_레퍼런스2 - 43page 
#include <iostream>

void inc1(int n)  { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 10, b = 10, c = 10;

	inc1(a);
	inc2(&b);
	inc3(c ? &c);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
}