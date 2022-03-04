// 6_STL_ITERATOR1
#include <iostream>
#include <list>
#include <deque>
#include <vector>

int main()
{
	std::list<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// 1. past the end 

	auto p1 = c.begin(); // std::begin(c);
	auto p2 = c.end();   // std::end(c);    past the end. ������ ���� ..

	*p1 = 10; // ok.  
//	*p2 = 20; // runtime error

	// c.end()�� ���� �ݺ��ڴ� 
	// ���� �뵵(==, !=)�θ� ����ؾ� �մϴ�.
	while (p1 != p2)
	{
		std::cout << *p1 << std::endl;
		++p1;
	}
}

