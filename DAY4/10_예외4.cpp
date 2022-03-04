#include <iostream>
#include <string>

// ���� ���� Ŭ������ �����ϴ� ���� �����ϴ�.
class DisconnectWIFI
{
	std::string desc;
	int errorcode;
};
// �ƹ��� ����� ���� Ŭ����(empty class) �� ������ �ʽ��ϴ�.
// Ŭ���� �̸� ��ü�� ������ ������ �����մϴ�.
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
		std::cout << "���� �߻�" << std::endl;
	}
	catch (InvalidURL& e)
	{
	}
	catch (...) // ������ ������ ���� ��� ���ܸ� ��� �ڵ�
	{
	}


	std::cout << "���α׷� ��� ����" << std::endl;
}