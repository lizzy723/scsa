#include <iostream>

// "미정의 동작(undefined)"
// => C++ 표준에서는 이렇게 하지 말라. 라고만 정의되어 있다.
// => 하지말라는 것을 했을때는 "컴파일러마다 다른현상이 나온다."

class Point
{
public:
//	int x;
	int y;
	int x;

	// 핵심 : 초기화 리스트의 실행순서는 코드 순서가 아닌 "멤버가 놓인 순서"입니다.
	Point() : y(0), x(y) {}
};

int main()
{
	// 실행하지 말고 결과 예측해 보세요.
	Point p;
	std::cout << p.x << std::endl; // ???
	std::cout << p.y << std::endl; // 0
}