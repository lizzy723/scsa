// 7_STL_ALGORITHM1
#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <algorithm> 

int main()
{
	std::vector<int> v = { 1,2, 6,4, 5,8, 9,3 };

	// �־��� �������� 3�� ã�� �ʹ�!!
	auto ret1 = std::find(v.begin(), v.end(), 3);

	// �־��� �������� ó�� ������ 3�� ����� ã�� �ʹ�.!
	auto ret2 = std::find(v.begin(), v.end(), ?? );
}