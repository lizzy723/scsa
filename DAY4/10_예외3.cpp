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
		
		// ������������ �Ҽ� �ִ� �۾��� ���⼭ ����
	}
	catch (int n)
	{
		std::cout << "���� �߻�" << std::endl;
		// �߻��� ���� ������
		// 1. �� �̻� ������ ����� : "����ڿ��� �˷��ְ�", ���α׷� ���� �ϼ���(exit()�Լ�)
		// 2. ���� ������ �����ϸ� : ���� �����ϼ���.. ���α׷���� ���డ��
	}


	std::cout << "���α׷� ��� ����" << std::endl;
}