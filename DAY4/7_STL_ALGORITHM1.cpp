// 7_STL_ALGORITHM1
#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <algorithm> 

// 알고리즘
// 일반적인 의미 : 문제를 해결하는 방법
// STL 에서     : find 같은 멤버 함수가 아닌 일반 함수(템플릿)을 나타내는 용어
//				  모든 컨테이너에 적용할수 있는 함수

int main()
{
	std::list<int>   s = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	// s, v 에서 3을 찾고 싶다.!
//	s.find(3); // 이런 방식으로   find를 만들었다면!!
//	v.find(3); // 모든 컨테이너에 find가 있어야 한다.

	// 한개의 find(템플릿)으로 모든 선형컨테이너에서 "선형 검색"을 수행할수 있습니다.
	auto ret1 = std::find(s.begin(), s.end(), 3);
	auto ret2 = std::find(v.begin(), v.end(), 3);

}