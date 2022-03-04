// 7_STL_ALGORITHM1
#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <algorithm> 

bool fn(int a)
{
	return a % 3 == 0;
}

int main()
{
	std::vector<int> v = { 1,2, 6,4, 5,8, 9,3 };
	
	auto ret1 = std::find_if(v.begin(), v.end(), fn);

	// 람다 표현식(lambda expression)
	// 함수 이름(주소)가 필요한 자리에 함수 구현을 직접 만드는 문법 - C++11
	// STL 사용시 __if() 알고리즘에서 널리 사용된다

	// [] : 람다가 시작됨을 알리는 "lambda introducer"
	
	auto ret2 = std::find_if(v.begin(), v.end(), 
						[](int a){return a % 3 == 0;} );

}