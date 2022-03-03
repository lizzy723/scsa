// 1_상수멤버함수1
#include <iostream>

class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) {}

	void set(int a, int b)
	{
		x = a;
		y = b;
	}
	void print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	Point pt(1, 2);
	p.x = 10;
	p.set(10, 20);
	p.print();
}