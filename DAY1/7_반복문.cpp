// 7_반복문    38page
#include <iostream>
#include <string>
int main()
{
	int x[5] = { 1,2,3,4,5 };

	// 기존의 for 문
	for (int i = 0; i < 5; i++)
	{
	}
	// 새로운 for 문 ( range-for, C++11)
	// 1. 전체 열거가 필요할때만 사용하세요
	// 2. 일부 열거나, +=2 로 이동하려면 위에 기존 for문 사용
//	for (int e : x)
	for (auto e : x) // x는 배열뿐아니라 C++표준의 list, vector 등도모두
	{					// 사용가능합니다.
		std::cout << e << ", ";
	}

	std::string s = "abcdefg";
	for (auto c : s)
	{
		std::cout << c << ", ";
	}

	// 동적할당된 배열도 되나요 ??? => 안됩니다.
//	int* arr = (int*)malloc(sizeof(int) * 10); // arr는 range-for 안됩니다.
}



