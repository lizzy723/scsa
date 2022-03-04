// 6_STL_ITERATOR1
#include <iostream>
#include <list>
#include <deque>
#include <vector>

int main()
{
	std::list<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// 컨테이너의 모든 요소를 열거하는 방법

	// 1. 반복자 사용 - 모든 컨테이너 가능, C++98 부터 가능(auto 제외)
	auto p1 = std::begin(c); // c.begin()

	while (p1 != std::end(c))
	{
		std::cout << *p1 << ", ";
		++p1;
	}
	std::cout << std::endl;

	// 2. legacy for 문과 [] 연산자 사용 - list 는 안됨. C++98 시절 부터..
	for (int i = 0; i < c.size(); i++)
	{
		std::cout << c[i] << ", "; // list 는 [] 사용 안됨!
	}
	std::cout << std::endl;


	// 3. C++11 에서 새로 나온 range for 사용 - 모든 컨테이너 가능. 
	for (auto e : c)   
		std::cout << e << ", ";

	std::cout << std::endl;
}






