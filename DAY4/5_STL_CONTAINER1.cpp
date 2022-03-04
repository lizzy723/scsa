// 5_STL_CONTAINER1 - 214 page
#include <iostream>

// 선형 컨테이너
#include <vector>
#include <list>
#include <deque>

int main()
{
	// 배열 : 연속된 메모리, 크기 조절 안됨
	int x[5] = { 1,2,3,4,5 };

	// vector : 연속된 메모리, 크기 조절 가능.
	//          요소 순회는 빠르지만, 중간에 삽입/삭제는 느리다.
	std::vector<int> c1 = { 1,2,3,4,5 };

	
	// list : 모든 요소가 떨어진 메모리
	//        요소 순회는 vector보다 느리다. 중간 삽입/삭제가 빠르다.
	std::list<int>   c2 = { 1,2,3,4,5 };


	// vector 와 list 의 혼합형..
	std::deque<int>  c3 = { 1,2,3,4,5 };
}





