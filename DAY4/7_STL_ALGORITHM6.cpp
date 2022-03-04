#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <algorithm> 
#include <numeric> // 수치 관련 알고리즘..

int main()
{
	std::vector<int> v1 = { 1,2,2,4,6,6,7,10,9,10,5,6 }; // 12개
	std::vector<int> v2;

	std::partial_sum( v1.begin(), v1.end(), v2.begin() );

	// 아래 결과 확인해 보고.. partial_sum 이 하는일을 생각해보세요
	for (auto e : v1)
		std::cout << e << ", ";
	std::cout << std::endl;

	for (auto e : v2)
		std::cout << e << ", ";
	std::cout << std::endl;

}
