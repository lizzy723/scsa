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
	// �������� ���� ��� ������ ������.
	Point p;
	std::cout << p.x << std::endl;
	std::cout << p.y << std::endl;
}