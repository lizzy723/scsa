// 5_������3 - 78page ~
#include <iostream>

class Point
{
	int x;
	int y;
public:
//	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; } // 1
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; } // 2
};

class Rect
{
	Point leftTop;
	Point rightBottom;
public:
	// ����ڰ� ���� �ڵ�		// �����Ϸ��� ������ �ڵ�
//	Rect()					// Rect() : leftTop(), rightBottom() 
//	{
//		std::cout << "Rect()" << std::endl;
//	}
	// ����Ʈ �����ڰ� ���� ��� ����Ÿ�� �ִٸ�(Pointó��) �ݵ�� �Ʒ�ó��
	// �ʱ�ȭ ����Ʈ���� �ٸ� �����ڸ� ȣ���Ҽ� �ְ� �ؾ� �մϴ�.
	Rect() : leftTop(0, 0), rightBottom(10, 10)
	{
		std::cout << "Rect()" << std::endl;
	}

};

int main()
{
	Rect rc;  // call Rect::Rect() �� ���� �ڵ� �����˴ϴ�.
}
