// 7_STL_ALGORITHM1
#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <algorithm> 
// 단항 함수 : 인자가 한개인 함수
// 이항 함수 : 인자가 2개인 함수

// 조건자 : 반환 값이 bool 인 함수로서 STL 의 xxx_if( ) 에 전달하는 함수

// 아래 같은 함수를 "단항 조건자(unary predicator)" 라고 부릅니다.
bool fn(int a)
{
	return a % 3 == 0;
}


int main()
{
	std::vector<int> v = { 1,2, 6,4, 5,8, 9,3 };

	// 주어진 구간에서 3을 찾고 싶다!!
	auto ret1 = std::find(v.begin(), v.end(), 3);  // "값 검색"


	// 주어진 구간에서 처음 나오는 3의 배수를 찾고 싶다.!

//	auto ret2 = std::find_if(v.begin(), v.end(), 함수 );
	auto ret2 = std::find_if(v.begin(), v.end(), fn );


	// std::find    : 값   검색
	// std::find_if : 조건 검색
}