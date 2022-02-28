// 4_함수3-1
#include <iostream>

template<typename T>
T square(T a)			// 함수가 아닙니다. 컴파일러가 함수를 찍어낼때
{						// 사용하는 틀입니다. 메모리에 존재하는 것이 아닙니다.
	return a * a;
}

int main()
{
//	printf("%p\n", &square); // ?? 될까요 ?? 잘생각해 보세요.
							// error. 틀은 메모리에 존재하지 않습니다.

	printf("%p\n", &square<int> ); // ok.. 틀을 가지고 생성된 함수는
									// 메모리에 존재 합니다.

	std::cout << &square<double> << std::endl; // 물론,cout 으로 출력해도 됩니다.
}
// 핵심 
// square      : 함수가 아닙니다. 함수를 만드는 틀(template)입니다.
// square<int> : 함수 입니다

