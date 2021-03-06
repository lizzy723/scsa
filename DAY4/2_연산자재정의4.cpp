// 2_연산자재정의1 - 182
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}

	Point operator+(const Point& p)
	{
		std::cout << "member operator+" << std::endl;

		Point temp(x + p.x, y + p.y);
		return temp;
	}

	friend Point operator+(const Point& p1, const Point& p2);
};
Point operator+(const Point& p1, const Point& p2)
{
	std::cout << "non member operator+" << std::endl;

	Point temp(p1.x + p2.x, p1.y + p2.y);
	return temp;
}
int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2;	// 1. p1.operator+(p2) 가 가능한가 ?
						// 2. operator+(p1, p2)가 가능한가 ?

	Point p4 = p1.operator+(p2); 
	Point p5 = operator+(p1, p2);

	// 멤버가 좋을까요 ? 일반 함수로 하는게 좋을까요 ?
	// => 2개 모두 만들 필요없습니다. 한개만 만들면 됩니다.

	// 멤버로 하자는 개발자의 주장 : private 영역에 접근하기 편하다.
	// 일반 함수 주장 : 멤버로 안되는 경우가 있다.

	int n = 3;
	Point p6 = p1 + p2; // p1.operator+(Point) 가 있으면 ok
	Point p7 = p1 + n;  // p1.operator+(int)   가 있으면 ok
	Point p8 = n + p1;  // n.operator+(Point)  가 있으면 될거 같은데...!!!
						// => n은 primitive 타입이다.!! 멤버로 만들수 없다.
						// => 일반함수로 할수 밖에 없다 "operator+(int, Point)"
}

// 아래 코드될까요 ? 안됩니다. 반드시 인자 중에 한개 이상은 "사용자 정의 타입"이어야 합니다.
// 185page.. 주의사항 보세요..
int operator+(int a, int b)
{
	return a - b;
}

int n = 3 + 2; // 1 ???

// ::   .  .*   ?:  => 재정의 안됨.

// =, (), [], ->  는 멤버 함수로만 가능

// C++ : 4개를 제외한 거의 모든 연산자를 재정의 가능 - 아주 막강한 능력!!
// C#  : 주요한 연산자 20여개 재정의 가능
// java : 이 문법 지원 안함
// python : 꽤 많은 연산자 재정의가능 20~30 여개