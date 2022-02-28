// 1_namespace4 - 10 page
//#include <stdio.h> // printf 가 전역에만 있습니다.
#include <cstdio>    // printf 가 전역에도 있고, std 안에도 있습니다.

// C 언어 헤더		C++언어가 다시만든헤더
// <xxxx.h>   ==>  <cxxxx>
// <stdio.h>  ==>  <cstdio>
// <stdlib.h> ==>  < ? >
// <string.h> ==>  < ? >

int main()
{
	// printf 는 C 표준 함수지만 C++ 표준 함수 이기도 합니다.

	printf("hello\n"); // ok

	std::printf("hello\n"); // 될까요 ??
}