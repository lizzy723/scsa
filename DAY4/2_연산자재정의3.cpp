// 2_������������1 - 182
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}

	/*
	// ����� ������ "operator+" �Լ�
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

	Point p3 = p1 + p2;	// 1. p1.operator+(p2) �� �����Ѱ� ?
						// 2. operator+(p1, p2)�� �����Ѱ� ?

//	Point p4 = p1.operator+(p2); // ����� �������� ����
	Point p5 = operator+(p1, p2); // �Ϲ��Լ��� ���� �͵� �̷��� ���� ȣ�Ⱑ��
//	Point p6(operator+(p1, p2));  // ���� �����ϰ�, ��������� ȣ�� �½��ϴ�.
}
