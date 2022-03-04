// 7_STL_ALGORITHM1
#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <algorithm> 

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	// std::find : [first, last) 에서 선형검색 수행
	auto ret = std::find( v.begin(), v.end(), 3 );

	// find 반환값
	// 검색 성공시 : 요소를 가리키는 반복자(포인터처럼 생각하세요)
	//     실패시  : last 반환

	if (ret == v.end())
		std::cout << "찾을수 없습니다." << std::endl;
	else
		std::cout << "성공 : " << *ret << std::endl;

}