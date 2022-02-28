// 3_변수1 - 18 page
#include <iostream>

// 변수와 타입은 "C" 언어에도 있는 개념이지만, C 의 기존 문법외에
// C++에서 추가한 문법이 있습니다.

struct Point
{
	int x = 0; // C++11 부터 구조체만들때 초기화 가능합니다.(19 page)
	int y = 0;
};

int main()
{
	struct Point pt1; // x, y 가 0 입니다. - C 언어는 "struct" 필요
	Point pt2;        // C++에서는 "struct" 없어도 됩니다.(물론 있어도 됩니다.)


	int n1 = 0b10;		// 2진수 가능합니다. C++11 부터
	int n2 = 1'000'000;	// C++11 부터 자릿수 표기도 가능합니다.
						// 정확한 의미는 "정수리터럴사이에 있는 싱글따옴표는
						// 무시해달라"는 의미 입니다.

	// 새로운 타입
	bool b = true; // 또는 false 로 초기화
				  // sizeof(bool) 은 1바이트 입니다.

	long long n3 = 10; // 64비트 정수
}