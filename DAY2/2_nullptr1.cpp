// 2_nullptr1 - 54page
#include <iostream>

int main()
{
	int  n1 = 10; // ok
//	int* p1 = 10; // error. 10은 정수이고 주소는 아닙니다.

	int  n2 = 0;
	int* p2 = 0; // ok. 0은 정수지만 컴파일러가 특별하게 처리합니다
				 //	    그래서 포인터 초기화에 사용가능합니다.

	// C++11을 만들때 0을 포인터 초기화에 사용하는 것이 좋지 않다고 생각해서
	// 새롭게 만들었습니다.
	int* p3 = nullptr; // 앞으로 0대신 nullptr 사용하세요.
	int n3 = nullptr; // error.

}