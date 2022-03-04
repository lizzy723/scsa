// 6_STL_ITERATOR1
#include <iostream>
#include <list>
#include <deque>
#include <vector>

int main()
{
//	std::list<int> c = { 1,2,3,4,5 };
//	std::vector<int> c = { 1,2,3,4,5 };

	int c[5] = { 1,2,3,4,5 };

	// 1. iterator 의 정확한 타입
	// 그런데. 아래 처럼 직접 사용하면
	// a. 복잡해 보이고
	// b. 컨테이너 변경시 코드 수정이 필요하다.
//	std::list<int>::iterator p1 = c.begin();

	// 2. C++11 이후라면 auto 사용하세요
//	auto p1 = c.begin(); // c 가 STL 컨테이너면 문제 없지만
						// raw array 라면 에러 입니다.

	// 3. 가장 좋은 코드는 아래 입니다
	auto p2 = std::begin(c); // 멤버 함수 begin 보다.
							 // 일반 함수 begin 이 좋다.!!!
							 // c가 raw array 이라도 ok..
}






/*
namespace std
{
	template<typename T>
	class list
	{
	public:
		class iterator
		{
		public:
			operator++() {}
			operator*() {}
		};
	};
}
*/