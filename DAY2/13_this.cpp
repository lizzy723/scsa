// 13_this - 126 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	void set(int a, int b)	// void set(Point* this, int a, int b)
	{						// {
		x = a;				//		this->x = a;
		y = b;				//		this->y = b;
		
		// ��� �Լ� �ȿ��� this �� ���� �Լ��� ȣ���Ҷ� ����� ��ü�� �ּ� �Դϴ�.
		std::cout << this << std::endl;
	}	
};
int main()
{
	Point p1;
	Point p2;
	p1.set(10, 20); // �� ������ ������ ������ ���ô�(126 page)
	p2.set(10, 20); // set(&p2, 10, 20) ��� ����˴ϴ�.

	std::cout << "&p1 : " << &p1 << std::endl;
	std::cout << "&p2 : " << &p2 << std::endl;
}

