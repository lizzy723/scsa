// 5_»ı¼ºÀÚ3 - 78page ~
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point()             { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }
};

int main()
{
	Point p1;
	Point p2(1, 2);
}