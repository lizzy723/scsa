#include <iostream>

// ��ü���� ���α׷����� �ٽ� 1. ���α׷����� �ʿ��� Ÿ���� ���� ��������.

// 2. Ÿ���� ���鶧 "���¸� ��Ÿ���� ����Ÿ�� ���¸� ������ ������ �����ϴ� �Լ�"��
//    ��� Ÿ���� ������

// C ����ü : �Լ��� �����Ҽ� ����.!
// C++����ü : �Լ��� �����Ҽ� �ִ�.

// ����Ÿ�� �Լ��� ���� ���� ����Ҷ� �ξ� ���ϰ�, ����(?)�ϴ�. (������������ ����)

struct Rect
{
	// ��� ����Ÿ ( �ʵ��� �մϴ�.)
	int left;
	int top;
	int right;
	int bottom;

	// ��� �Լ� ( �޼ҵ� ��� �մϴ�.)
	int getArea() {	return (right - left) * (bottom - top);	}
	void draw()   {	std::cout << "draw rect" << std::endl;	}
};
int main()
{
	Rect rc = { 1,1, 10,10 };

//	int n1 = getRectArea(rc);
//	drawRect(rc);

	int n1 = rc.getArea();
	rc.draw();
}