// 6_STL_ITERATOR1
#include <iostream>
#include <list>
#include <deque>
#include <vector>

int main()
{
	int x[5] = { 1,2,3,4,5 };
	int* p1 = x;
	++p1;

	std::list<int> s = { 1,2,3,4,5 };

	auto p2 = s.begin();
	++p2;
	std::cout << *p2 << std::endl;
}