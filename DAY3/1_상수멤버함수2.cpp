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

	int getArea() const 
	{
		// ��� ��� �Լ� �ȿ����� ��� ����Ÿ ����ȵ˴ϴ�.
//		x = 0; // error
		return w * h; 
	}
	
	// �簢�� �̵� - ��� ����Լ��� �ϸ� �ȵ˴ϴ�. 
	void move(int dx, int dy)
	{
		x = dx;
		y = dy;
	}
};
//void fn(Rect rc)    // call by value �� ������尡 �ִ�.
void fn(const Rect& rc)
{
	rc.move(1, 2); // error
	int n = rc.getArea(); // ok 
}
int main()
{
	Rect r(1, 1, 10, 10);  // �����ü �ƴ�.
	int n = r.getArea();   // ok
	fn(r);
}