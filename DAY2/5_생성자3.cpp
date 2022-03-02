// 5_������3 - 78page ~
#include <iostream>

class Point
{
	int x;
	int y;
public:
	// 1. ��� ��ü�� ������ �ݵ�� �����ڸ� ȣ��Ǿ� �Ѵ�.
	// 2. ����ڰ� �����ڸ� �Ѱ��� ������ ������ "�����Ϸ��� ���� ���� ������" ����
	//	  ==> ���� ���� �����ڸ� "default(�⺻) ������" ��� �մϴ�.

	Point()             { x=0; y=0; std::cout << "Point()"         << std::endl; } // 1
	Point(int a, int b) { x=a; y=b; std::cout << "Point(int, int)" << std::endl; } // 2
};
int main()
{
	Point p1;		// 1��������
	Point p2(1, 2); // 2��������

	// C++11 ���ʹ� �Ʒ� ó�� ��ü ������ ����("�ϰ��� �ʱ�ȭ" ����)
	Point p3{ 1,2 };   // 2�� ������
	Point p4 = { 1,2 };// 2�� ������.

	Point arr1[5]; // 1�� ������ 5ȸ ȣ��
	Point arr2[5] = { {1,2},{2,3} }; // 2�� 2ȸ, 1�� 3ȸ ȣ��


	Point* p; // ��ü ������ �ƴ�.. ������ ȣ�� �ȵ�

	p = (Point*)malloc( sizeof(Point) ); // 8 byte ũ���� �޸� �Ҵ��� �޶�°�
	free(p);							// ������ ȣ�� �ȵ�

	p = new Point; // 1�� ������
	delete p;

	p = new Point(1, 1); // 2�� ������
	delete p;
}