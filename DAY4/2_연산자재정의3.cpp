// 2_연산자재정의1 - 182
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}

	/*
	// 멤버로 구현한 "operator+" 함수
	Point operator+(const Point& p)
	{
		std::cout << "member operator+" << std::endl;

		Point temp(x + p.x, y + p.y);
		return temp;
	}
	*/

	friend Point operator+(const Point& p1, const Point& p2);
};
Point operator+(const Point& p1, const Point& p2)
{
	std::cout << "non member operator+" << std::endl;

	Point temp( p1.x + p2.x, p1.y + p2.y );
	return temp;
}
int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2;	// 1. p1.operator+(p2) 가 가능한가 ?
						// 2. operator+(p1, p2)가 가능한가 ?

//	Point p4 = p1.operator+(p2); // 멤버가 있을때만 가능
	Point p5 = operator+(p1, p2); // 일반함수로 만든 것도 이렇게 직접 호출가능
//	Point p6(operator+(p1, p2));  // 위와 동일하고, 복사생성자 호출 맞습니다.
}
