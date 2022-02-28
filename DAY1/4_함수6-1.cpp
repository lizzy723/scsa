// 4_함수6-1
#include <iostream>

/*
int add(int a, int b)
{
	return a + b;
}
*/
template<typename T>
T add(T a, T b)
{
	return a + b;
}

int main()
{
	std::cout << add(1,   2)   << std::endl;
	std::cout << add(1.1, 2.2) << std::endl; 

//	std::cout << add(1, 2.2) << std::endl; // 템플릿 인자는 T, T 인데
									// 1, 2번째 인자의 타입이 다르므로
									// 컴파일러가 T 타입 결정 못함. error

	// 아래 처럼 타입 인자를 전달하면 에러 아님
	std::cout << add<double>(1, 2.2) << std::endl;
}

