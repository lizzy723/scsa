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

// �Ʒ� 2���Լ��� �������� ���� ��Ȯ�� ������ ������
/*
void f1(Point  p1) {} // call by value     : ���纻 ��ü ����
void f2(Point& p2) {} // call by reference : ���纻 ��ü ���� �ȵ�

int main()
{
	Point pt(1, 2);
	f1(pt);
	f2(pt);
}
*/

// �Ʒ� �ڵ尡 ��ƽ��ϴ�.
Point pt(1, 2);

Point f3() // return by value : ���Ͽ� ���纻��ü�� ����
{			//					��ȯ �մϴ�.
			//				���Ͽ� ���纻 ��ü�� �Լ� ȣ�⹮���� ������ �ı��˴ϴ�.
	return pt;
}

Point& f4()  // return by reference : ���Ͽ� �ӽð�ü�� ������ ����
{			//					pt ��ü�� ������ ��ȯ�� �޶�.
	return pt;
}

int main()
{
	std::cout << "----------" << std::endl;
//	f3();
	f4();
	std::cout << "----------" << std::endl;
}