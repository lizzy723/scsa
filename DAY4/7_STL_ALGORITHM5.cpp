#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <algorithm> 

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	std::replace(v.begin(), v.end(), 4, 0); // A


	for (auto e : v)
		std::cout << e << ", ";

	// �� �ڵ� ��� Ȯ���� ������
	// 1. A �ּ����� ��������
	// 2. A ��� "��� ¦���� 0���� ����� ������" - ����ǥ�������� �ϼ���.
	//										==> �� �����غ�����..
}
