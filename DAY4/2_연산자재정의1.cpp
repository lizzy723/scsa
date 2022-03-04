// 2_연산자재정의1 - 182
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}
};
int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 2개의 점을 더하려고 합니다. 다음중 제일 좋아 보이는 코드를 선택해 보세요
	Point p3 = add(p1, p2); // 1
	Point p4 = p1.add(p2);	// 2
	Point p5 = p1 + p2;		// 3.. 단축 표기의 미학

	// "a + b" 를 컴파일러가 해석하는 원리
	// 1. a, b 가 모두 primitive 타입이면 그냥 덧셈 수행
	// 2. 둘중 한개라도 user type 이면
	//    A.  a.operator+(b) 가 가능하면 사용, 안되면 아래 조사
	//    B.  operator+(a, b) 가 가능하면 사용, 안되면 error
}