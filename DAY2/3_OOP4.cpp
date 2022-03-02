#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() { return (right - left) * (bottom - top); }
	void draw() { std::cout << "draw rect" << std::endl; }
};
int main()
{
	int n1 = 10; // n1 �� "variable(����), ���ϴ� ��"

	Rect r1 = { 1,1,10,10 }; // r1�� "����" ��� ���� "��ü(object)"����մϴ�.
	Rect r2 = { 1,1,10,10 };
}
// ������ �̾߱� �ϸ� "n1, r1, r2" ��� ��ü(object) �Դϴ�.
// �׷���, ���ʻ�
// primitive Ÿ���� ��ü : "����"
// user Ÿ���� ��ü      : "��ü(object)"��� �մϴ�.

// ��ü r1, r2 ������
// 1. ��� ����Ÿ�� r1, r2 ���� ���̰� �˴ϴ�.
// 2. ��� �Լ��� ��ü�� ������ ������� �ڵ� �޸𸮿� �Ѱ��� �ֽ��ϴ�.
// 3. ����, sizeof(Rect) => 16 �Դϴ�.