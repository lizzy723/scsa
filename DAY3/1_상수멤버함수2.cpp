// 1_�������Լ�2

// ��� ��� �Լ��� ������ �ƴ� "�ʼ� ����" �Դϴ�.
// ��ü�� ���¸� �������� ���� ��� ��� �Լ�(getter, getxxx() ����� �Լ�)��
// �ݵ�� ��� ��� �Լ��� ���� �Ǿ�� �մϴ�.

// ���� ��� today.afterDays(1000) ���� ����Լ��� ��� ����Լ��� �Ǿ�� �մϴ�.
class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d) : x(a), y(b), w(c), h(d) {}

	int getArea() const { return w * h; }
};

//void fn(Rect rc)    // call by value �� ������尡 �ִ�.
void fn(const Rect& rc)
{
	int n = rc.getArea();
}
int main()
{
	Rect r(1, 1, 10, 10);  // �����ü �ƴ�.
	int n = r.getArea();   // ok
	fn(r);
}