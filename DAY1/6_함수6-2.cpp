// 4_함수6-1
#include <iostream>

// 2개의 인자가 서로 다른 타입을 받을수 있도록!!
template<typename T1, typename T2>
? add(T1 a, T2 b)
{
	return a + b;
}

int main()
{
	std::cout << add<int, double>(1, 2.2) << std::endl;  // 타입을 전달하는경우
	
	std::cout << add(1, 2.2) << std::endl;  // 타입 인자 생략 가능
											// 함수 인자로 타입 결정
}

