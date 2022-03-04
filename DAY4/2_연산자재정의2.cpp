// 2_연산자재정의1 - 182
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}

	// 멤버로 구현한 "operator+" 함수
	Point operator+(const Point& p)
	{
		std::cout << "member operator+" << std::endl;

		Point temp(x + p.x, y + p.y);
		return temp;
	}
};
int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2;	// 1. p1.operator+(p2) 가 가능한가 ?
						// 2. operator+(p1, p2)가 가능한가 ?
	Point p4 = p1.operator+(p2); // 이렇게 함수를 직접 호출해도 됩니다.
}
// 연산자 재정의를 지원하는 대부분의 언어의 특징이 "+" 사용시 약속된 멤버함수를 호출하는 것입니다.
// a + b
// C++    : a.operator+(b)
// python : a.__add__(b)
// C#     : a.op_add(b)