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

	std::cout << pt; // ���ڵ尡 �� ���� �ǵ��� ����� ���ô�.
					 // cout.operator<<(Point) �� �ʿ� �մϴ�  
					// �׷���, cout�� C++ ǥ�� Ŭ���� �̹Ƿ� ����ڰ� ����Լ��� �߰��Ҽ� �����ϴ�.
					// �׷���!!
					// operator<<( cout, pt) �� �����ؼ� ������ �մϴ�.
					// operator<<( ostream, Point)
}