// 7_STL_ALGORITHM1
#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <algorithm> 

int main()
{
	std::vector<int> v = { 1,2, 6,4, 5,8, 9,3 };

	// 주어진 구간에서 3을 찾고 싶다!!
	auto ret1 = std::find(v.begin(), v.end(), 3);

	// 주어진 구간에서 처음 나오는 3의 배수를 찾고 싶다.!
	auto ret2 = std::find(v.begin(), v.end(), ?? );
}