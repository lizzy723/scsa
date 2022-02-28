// 1_namespace3.cpp - 9page 내용

// 1. 모든 C++ 표준은 std 라는 이름공간안에 있습니다.

#include <algorithm>  // C++ 표준 함수인 이헤더에 min 이 있습니다.
//using namespace std;

int count = 10;

int main()
{
//	int n1 = min(3, 4); // error
	int n2 = std::min(3, 4); // ok

	int n3 = count; // 이 코드가 왜??? 에러 일까요 ?
					// C++ 표준에 "std::count()" 가 있습니다.
					// using namespace std 때문에 
					// 전역변수 count 와 표준 count()함수이름이 충돌 입니다
}
