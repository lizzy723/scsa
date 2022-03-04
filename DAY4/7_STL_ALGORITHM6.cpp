#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <algorithm> 
#include <numeric> // ��ġ ���� �˰���..

int main()
{
	std::vector<int> v1 = { 1,2,2,4,6,6,7,10,9,10,5,6 }; // 12��
	std::vector<int> v2;

	std::partial_sum( v1.begin(), v1.end(), v2.begin() );

	// �Ʒ� ��� Ȯ���� ����.. partial_sum �� �ϴ����� �����غ�����
	for (auto e : v1)
		std::cout << e << ", ";
	std::cout << std::endl;

	for (auto e : v2)
		std::cout << e << ", ";
	std::cout << std::endl;

}
