// 10_복사생성자1 - 92 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point()             : x(0), y(0) {}
	Point(int a, int b) : x(a), y(b) {}
};
int main()
{
	// 아래 4줄을 생각해 보세요
	Point p1;
	Point p2(1, 2);
	Point p3(1);
	Point p4(p2);
}