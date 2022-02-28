// 9_레퍼런스1 => 41page 중요한 문법. 
#include <iostream>

int main()
{
	int  n = 10; // (스택)메모리를 할당하는 코드

	int* p = &n; // p도 결국 변수, 
				 // 그런데, 주소를 보관
		
	int& r = n;  // 기존 변수(n)에 
				 // 또다른 이름을 부여하는 문법

	r = 20;	// 결국 n = 20

	std::cout << n << std::endl; // 20
	std::cout << &n << std::endl; // 1000
	std::cout << &r << std::endl; // 1000 즉, &n 과 &r 은 동일!

	// 핵심 : 레퍼런스(reference) 는 기존 변수에 대한 alias를 부여하는 문법

	// 주의 사항 .
	int& r1; // error. 반드시 초기값(다른 변수)이 필요 합니다.

	// 포인터는 주소로 초기화, 참조는 변수 이름으로초기화 입니다.
	int*  p1 = &n;
	int&  p2 =  n;

	// & 의 용도는 2개 입니다. 
	// 1. 변수의 주소 구할때 : &n
	// 2. 레퍼런스 만들때    : int& r = n;
}