// 7_�ݺ���    38page
#include <iostream>
#include <string>
int main()
{
	int x[5] = { 1,2,3,4,5 };

	// ������ for ��
	for (int i = 0; i < 5; i++)
	{
	}
	// ���ο� for �� ( range-for, C++11)
	// 1. ��ü ���Ű� �ʿ��Ҷ��� ����ϼ���
	// 2. �Ϻ� ���ų�, +=2 �� �̵��Ϸ��� ���� ���� for�� ���
//	for (int e : x)
	for (auto e : x) // x�� �迭�Ӿƴ϶� C++ǥ���� list, vector ����
	{					// ��밡���մϴ�.
		std::cout << e << ", ";
	}

	std::string s = "abcdefg";
	for (auto c : s)
	{
		std::cout << c << ", ";
	}

	// �����Ҵ�� �迭�� �ǳ��� ??? => �ȵ˴ϴ�.
//	int* arr = (int*)malloc(sizeof(int) * 10); // arr�� range-for �ȵ˴ϴ�.
}



