#include <iostream>

// 이미 C++ 표준에 std::vector가 있습니다(동적배열)
// C++ 표준라이브러리를 "STL ( Standard Template Library )" 라고 합니다.
#include <vector>

int main()
{
	std::vector<int> v1(5); 

	v1[0] = 10; // 진짜 배열처럼 [] 연산됩니다.
	v1[1] = 15;
	v1.resize(10);

	std::cout << v1.size() << std::endl;
	//---------------------------
	std::vector<int> v2 = { 1,2,3 }; // 진짜배열처럼 초기화도 가능합니다

	v2.push_back(10); // 끝에 한개 추가
	std::cout << v2.size() << std::endl;
}