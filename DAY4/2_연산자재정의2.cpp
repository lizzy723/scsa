// 2_������������1 - 182
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}

	// ����� ������ "operator+" �Լ�
	Point operator+(const Point& p)
	{
		std::cout << "member operator+" << std::endl;

		Point temp(x + p.x, y + p.y);
		return temp;
	}
};
int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2;	// 1. p1.operator+(p2) �� �����Ѱ� ?
						// 2. operator+(p1, p2)�� �����Ѱ� ?
	Point p4 = p1.operator+(p2); // �̷��� �Լ��� ���� ȣ���ص� �˴ϴ�.
}
// ������ �����Ǹ� �����ϴ� ��κ��� ����� Ư¡�� "+" ���� ��ӵ� ����Լ��� ȣ���ϴ� ���Դϴ�.
// a + b
// C++    : a.operator+(b)
// python : a.__add__(b)
// C#     : a.op_add(b)