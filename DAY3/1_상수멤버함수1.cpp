// 1_�������Լ�1
#include <iostream>
// 119 page �Դϴ�.
class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) {}

	void set(int a, int b)
	{
		x = a;
		y = b;
	}
	// ��� ��� �Լ� : ��� �Լ� () �ڿ� const �� ���̴� ����
	//				   ��� �Լ� �ȿ��� ��� ����Ÿ�� �������� �������̶�� ���
	//			       ��� ��ü�� ���� ��� ��� �Լ��� ȣ�Ⱑ���ϴ�.
	void print() const 
	{
//		x = 10; // error.  ��� ����Լ� �ȿ����� ��� ����Ÿ�� �����Ҽ� ����.

		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	const Point pt(1, 2);

	pt.x = 10;      // error. public �� ������ ��� �̹Ƿ� ����ȵ�!
	pt.set(10, 20); // error. 
	pt.print();     // error
					// ��, print()�� ��� ����Լ���� ���� �ƴ�..
	// �ٽ� : "�����ü�� ��� ��� �Լ��� ȣ�� �����ϴ�"
}