// 4_reference_return1 - 좀 어려운데.. 꼭 알아 두세요
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}

	~Point() { std::cout << "~Point()" << std::endl; }
};

Point pt(1, 2);

// 아래 2개의 함수를 잘 생각해 보세요
Point& f1()
{
	return pt;
}

Point& f2()
{
	Point p(1, 2);
	return p;  
}

int main()
{

}