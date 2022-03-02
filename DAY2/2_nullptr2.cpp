#include <iostream>

void fn(int  n) { std::cout << "int" << std::endl; }
void fn(int* p) { std::cout << "int*" << std::endl; }

int main()
{
	fn(0); // 어떻게 될까요 ?
}