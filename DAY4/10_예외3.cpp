#include <iostream>

int ConnectServer()
{
	if (1)			
		throw 1;	

	return 10;
}

int main()
{
	try
	{
		ConnectServer();
		
		// 성공했을때만 할수 있는 작업을 여기서 수행
	}
	catch (int n)
	{
		std::cout << "예외 발생" << std::endl;
		// 발생된 오류 조사후
		// 1. 더 이상 실행이 힘들면 : "사용자에게 알려주고", 프로그램 종료 하세요(exit()함수)
		// 2. 오류 수정이 가능하면 : 오류 수정하세요.. 프로그램계속 실행가능
	}


	std::cout << "프로그램 계속 실행" << std::endl;
}