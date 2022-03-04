// 7_STL_ALGORITHM1
#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <algorithm> 

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	// std::find : [first, last) ���� �����˻� ����
	auto ret = std::find( v.begin(), v.end(), 3 );

	// find ��ȯ��
	// �˻� ������ : ��Ҹ� ����Ű�� �ݺ���(������ó�� �����ϼ���)
	//     ���н�  : last ��ȯ

	if (ret == v.end())
		std::cout << "ã���� �����ϴ�." << std::endl;
	else
		std::cout << "���� : " << *ret << std::endl;

}