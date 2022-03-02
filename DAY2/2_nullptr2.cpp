#include <iostream>

void fn(int    n) { std::cout << "int" << std::endl; }
void fn(double n) { std::cout << "double" << std::endl; }
void fn(bool   n) { std::cout << "bool" << std::endl; }
void fn(int*   p) { std::cout << "int*" << std::endl; }

int main()
{
	fn(0); // 어떻게 될까요 ?
}