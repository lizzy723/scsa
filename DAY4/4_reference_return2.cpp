// 4_reference_return1 - �� ����.. �� �˾� �μ���
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

// �Ʒ� 2���� �Լ��� �� ������ ������
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