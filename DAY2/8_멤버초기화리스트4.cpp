#include <iostream>

class Point
{
public:
	int x;
	int y;

	Point() : y(0), x(y) {}
};

int main()
{
	// 실행하지 말고 결과 예측해 보세요.
	Point p;
	std::cout << p.x << std::endl;
	std::cout << p.y << std::endl;
}