#include <iostream>

void fn(int    n) { std::cout << "int" << std::endl; }
void fn(double n) { std::cout << "double" << std::endl; }
void fn(bool   n) { std::cout << "bool" << std::endl; }
void fn(int*   p) { std::cout << "int*" << std::endl; }

int main()
{
	fn(0);   // int    "0 은 정수형(int) literal 입니다"
	fn(0.0); // double "0.0 은 실수형(double) literal 입니다"
	fn(false); // bool "false 는 bool 형 literal 입니다"

//	fn((int*)0); // int* , 예전 스타일
	fn(nullptr); // int*,   "nullptr 은 포인터형 literal 입니다."
			
	goo(0); // goo의 인자는 무슨 타입이었을까요 ?
	hoo(nullptr); // goo(0) 코드와 hoo(nullptr) 중 가독성이 좋은 것은 ?
}