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

	// 위 코드 결과 확인해 보세요
	// 1. A 주석으로 막으세요
	// 2. A 대신 "모든 짝수를 0으로 만들어 보세요" - 람다표현식으로 하세요.
	//										==> 잘 생각해보세요..
}
