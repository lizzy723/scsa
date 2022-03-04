// 7_STL_ALGORITHM1
#include <iostream>
#include <list>
#include <deque>
#include <vector>

int main()
{
	std::list<int>   s = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	// s, v ���� 3�� ã�� �ʹ�.!
//	s.find(3); // �̷� �������   find�� ������ٸ�!!
//	v.find(3); // ��� �����̳ʿ� find�� �־�� �Ѵ�.

	// �Ѱ��� find(���ø�)���� ��� ���������̳ʿ��� "���� �˻�"�� �����Ҽ� �ֽ��ϴ�.
	auto ret1 = std::find(s.begin(), s.end(), 3);
	auto ret2 = std::find(v.begin(), v.end(), 3);

}