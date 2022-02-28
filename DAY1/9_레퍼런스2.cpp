// 9_레퍼런스2 - 43page 
#include <iostream>

void inc1(int n)  { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 10, b = 10, c = 10;

	inc1(a); // call by value, 복사본이 증가, 
			 // 원본 a 는 증가 안됨. 실패

	inc2(&b);// call by pointer
			 // 원본 b 증가. 성공!
	
	inc3(c); // call by reference
			 // 원본 c 증가. 성공 !

	std::cout << a << std::endl; // 10
	std::cout << b << std::endl; // 11
	std::cout << c << std::endl; // 11
}
// 포인터와 레퍼런스는 유사한 특징이 있습니다.
// 함수 인자로 사용시 모두 원본을 수정할수 있습니다.

// 그런데, 레퍼런스가 쉽고, 안전합니다.

void f1(int* p)
{
	// 포인터 사용시 안전한 코드로 작성하려면
	if (p != 0) // 이렇게 해야 합니다.
	{
		*p = 10;
	}
}
f1(0); // 이 코드가 가능합니다.

void f2(int& r)
{
	r = 10;  // 2.그래서 이 코드는 항상 안전합니다.
}
f2(0); // error. 1. 반드시 변수를 보내야 합니다.!!