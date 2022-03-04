// 2_������������1 - 182
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}
};
int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 2���� ���� ���Ϸ��� �մϴ�. ������ ���� ���� ���̴� �ڵ带 ������ ������
	Point p3 = add(p1, p2); // 1
	Point p4 = p1.add(p2);	// 2
	Point p5 = p1 + p2;		// 3.. ���� ǥ���� ����

	// "a + b" �� �����Ϸ��� �ؼ��ϴ� ����
	// 1. a, b �� ��� primitive Ÿ���̸� �׳� ���� ����
	// 2. ���� �Ѱ��� user type �̸�
	//    A.  a.operator+(b) �� �����ϸ� ���, �ȵǸ� �Ʒ� ����
	//    B.  operator+(a, b) �� �����ϸ� ���, �ȵǸ� error
}