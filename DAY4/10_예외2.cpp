// ��ü���� ����� ���� ó�� - ���� ��� ���� ���
#include <iostream>

int ConnectServer()
{
	if (1)			// ���ж�� ����
		throw 1;	// �����ϸ� "���ܸ� �����ϴ�."

	return 10;
}

int main()
{
	// ������ ���ܸ� ó������ ������ ���α׷��� ���� ���� �˴ϴ�.
	ConnectServer();

	std::cout << "���α׷� ��� ����" << std::endl;
}