#include <iostream>

void fn(int    n) { std::cout << "int" << std::endl; }
void fn(double n) { std::cout << "double" << std::endl; }
void fn(bool   n) { std::cout << "bool" << std::endl; }
void fn(int*   p) { std::cout << "int*" << std::endl; }

int main()
{
	fn(0);   // int    "0 �� ������(int) literal �Դϴ�"
	fn(0.0); // double "0.0 �� �Ǽ���(double) literal �Դϴ�"
	fn(false); // bool "false �� bool �� literal �Դϴ�"

//	fn((int*)0); // int* , ���� ��Ÿ��
	fn(nullptr); // int*,   "nullptr �� �������� literal �Դϴ�."
			
	goo(0); // goo�� ���ڴ� ���� Ÿ���̾������ ?
	hoo(nullptr); // goo(0) �ڵ�� hoo(nullptr) �� �������� ���� ���� ?
}