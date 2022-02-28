// 4_함수6-1
#include <iostream>

// 2개의 인자가 서로 다른 타입을 받을수 있도록!!
template<typename T1, typename T2>
//? add(T1 a, T2 b)				// ? 를 표기하기가 어려 웠습니다.
//decltype(a+b) add(T1 a, T2 b)	// 그래서, C++11에서 decltype()을 만들었습니다. 그런데 에러 입니다.
								// a,b 를 선언전에 사용하는 코드입니다

//auto add(T1 a, T2 b)-> decltype(a + b) // ok.. C++11 의 후위 반환 타입문법이 이럴때 필요합니다.

auto add(T1 a, T2 b)    // 그런데, C++14 부터, 이 표기법도 허용하기로 했습니다.
{						// 이 경우 return 문을 보고 컴파일러가 추론합니다.
	return a + b;
}

int main()
{
	std::cout << add<int, double>(1, 2.2) << std::endl;  // 타입을 전달하는경우
	
	std::cout << add(1, 2.2) << std::endl;  // 타입 인자 생략 가능
											// 함수 인자로 타입 결정

//	a = 20; // ?? error. 변수를 선언전에 사용하므로!
//	int a = 10;
//	a = 20; // ok.. 아무 문제 없습니다.
}

