// 3_변수6- 26 page 3.11
#include <iostream>
#include <cstring>  // <string.h> 의 C++ 버전. strcpy()등의 문자열 함수를 위해서
#include <string>   // std::string 타입을 사용하기 위한 헤더.


int main()
{
	// C 언어의 문자열 관리는 너무 불편합니다.
	char cs1[] = "hello";
	char cs2[6];
//	cs2 = cs1;	// error.
//	strcpy(cs2, cs1); // 의도대로  하려면 문자열 복사 함수 사용

//	if (cs1 == cs2) {} // 항상 false, 
						// 문자열 자체를 비교하고 싶었다면 strcmp(s2,s1) ==0

	// C++ 은 std::string 이라는 타입을 사용하면됩니다.
	// (정확히는 class문법으로 만든 사용자정의 타입)
	std::string s1 = "hello";
	std::string s2;

	// s1, s2 는 사용법이 int 형 변수와 거의 동일합니다.
	s2 = s1;
	
	if (s2 == s1) {}

	s2 = s1 + s2;
//	s2 = s1 * 3; // 이것도 되나요 ? 파이썬 처럼... 아니요!! error
				 // 파이썬	s2 = "aa" * 3 => "aaaaaa"

	std::cout << s2 << std::endl;
}