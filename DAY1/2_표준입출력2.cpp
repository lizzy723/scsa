// std::endl 사용 후에도 계속 << 를 이어갈 수 있나요 ? 네..!
// 2_표준입출력2
#include <iostream>
#include <iomanip>   // C++ 입출력 조정자 함수들이 있는 헤더.
					 // (i/o manipulator 라고 합니다.)
// 15 page 중간부분 ~
int main()
{
	std::cout << 10 << std::endl;

	std::cout << std::hex << 10 << std::endl;  // printf("%x", 10) 의 의미
	std::cout << std::dec << 10 << std::endl;

	std::cout << std::setw(15) << 10 << std::endl;

	std::cout << std::setw(15) << std::setfill('#') << 10 << std::endl;
}
// 해보신 분은 cppreference.com 에서 "std::setw" 검색해보세요