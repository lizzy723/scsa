// 6_STL_ITERATOR1
#include <iostream>
#include <list>
#include <deque>
#include <vector>

int main()
{
	int x[5] = { 1,2,3,4,5 };

	// 배열은 연속된 메모리 이므로
	// 1번째 요소의 주소만 알면 모든 요소에 접근할수 있습니다.
	int* p1 = x;
	++p1;


	std::list<int> s = { 1,2,3,4,5 };

	// STL 컨테이너는 반복자(iterator)를 꺼내면 모든 요소에 접근할수 있습니다.
	// 반복자(iterator) : 포인터는 아니지만, 포인터 처럼 동작하게 만든 타입
	//						++, * 연산자 재정의로 만들어진 도구
	// 컨테이너의 내부 구조에 상관없이 동일한 방법으로 모든 요소 접근 가능
	auto p2 = s.begin();
	
	// p2는 진짜 포인터가 아니라 객체입니다.
	++p2; // p2.operator++()이 호출됩니다.


	std::cout << *p2 << std::endl;
}