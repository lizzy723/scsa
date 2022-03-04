// 6_STL_ITERATOR1
#include <iostream>
#include <list>
#include <deque>
#include <vector>

int main()
{
	std::list<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// �����̳��� ��� ��Ҹ� �����ϴ� ���

	// 1. �ݺ��� ��� - ��� �����̳� ����, C++98 ���� ����(auto ����)
	auto p1 = std::begin(c); // c.begin()

	while (p1 != std::end(c))
	{
		std::cout << *p1 << ", ";
		++p1;
	}
	std::cout << std::endl;

	// 2. legacy for ���� [] ������ ��� - list �� �ȵ�. C++98 ���� ����..
	for (int i = 0; i < c.size(); i++)
	{
		std::cout << c[i] << ", "; // list �� [] ��� �ȵ�!
	}
	std::cout << std::endl;


	// 3. C++11 ���� ���� ���� range for ��� - ��� �����̳� ����. 
	for (auto e : c)   
		std::cout << e << ", ";

	std::cout << std::endl;
}






