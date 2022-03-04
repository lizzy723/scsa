#include <iostream>
#include <string>

// 예외 전용 클래스를 설계하는 것이 좋습니다.
class DisconnectWIFI
{
	std::string desc;
	int errorcode;
};
// 아무런 멤버가 없는 클래스(empty class) 도 나쁘지 않습니다.
// 클래스 이름 자체가 오류의 원인을 설명합니다.
class InvalidURL {}; // sizeof(InvalidURL) => 1 byte
class FileNotFound {};

int ConnectServer()
{
	if (1)
	{
//		throw 1;
		InvalidURL e;
		throw e;
	}
	if (2)
	{
		FileNotFound e;
		throw e;
	}

	return 10;
}

int main()
{
	try
	{
		ConnectServer();
	}
	catch (FileNotFound& e)
	{
		std::cout << "예외 발생" << std::endl;
	}
	catch (InvalidURL& e)
	{
	}
	catch (...) // 위에서 잡히지 않은 모든 예외를 잡는 코드
	{
	}


	std::cout << "프로그램 계속 실행" << std::endl;
}