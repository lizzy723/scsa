// 10_���������1 - 92 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point()             : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2

	// ���� ������ : �ڽŰ� ������ Ÿ���� ��ü �Ѱ��� ���ڷ� ������ ������
	//			    ����ڰ� ������ ������ �����Ϸ��� ����
	// �����Ϸ��� �����ϴ� ���� �Ʒ��� ����
	Point(const Point& p) : x(p.x), y(p.y)
	{
	}
};
int main()
{
	// �Ʒ� 4���� ������ ������
	Point p1;		// ok.. 1�� ������
	Point p2(1, 2);	// ok.. 2�� ������
//	Point p3(1);	// error. Point(int) ����� �����ڴ� ����!
	
	Point p4(p2);	// ok.    Point(Point) ����� ������ �ʿ�!

	Point p5 = p2;  // ok.. ���� ����
}