// 3_cout5
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};

std::ostream& operator<<(std::ostream& os, const Point& pt)
{
	os << pt.x << ", " << pt.y;
	return os;
}

int main()
{
	Point pt(1, 2);

	std::cout << pt; // 이코드가 잘 실행 되도록 만들어 봅시다.
					 // cout.operator<<(Point) 가 필요 합니다  
					// 그런데, cout은 C++ 표준 클래스 이므로 사용자가 멤버함수를 추가할수 없습니다.
					// 그래서!!
					// operator<<( cout, pt) 로 생각해서 만들어야 합니다.
					// operator<<( ostream, Point)
}