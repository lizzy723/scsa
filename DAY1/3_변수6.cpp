// 3_변수6- 26 page 3.11
#include <iostream>
#include <cstring> 
#include <string>

int main()
{
	// C 언어의 문자열 관리는 너무 불편합니다.
	char cs1[] = "hello";
	char cs2[6];

	cs1 = cs2;	// ?

	if (cs1 == cs2) {} // ?
}