// 객체지향 언어의 오류 처리 - 예외 라는 개념 사용
#include <iostream>

int ConnectServer()
{
	if (1)			// 실패라고 가정
		throw 1;	// 실패하면 "예외를 던집니다."

	return 10;
}

int main()
{
	// 던져진 예외를 처리하지 않으면 프로그램의 강제 종료 됩니다.
	ConnectServer();

	std::cout << "프로그램 계속 실행" << std::endl;
}