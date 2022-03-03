// 5_virtual5

class Shape
{
public:
	virtual void draw() {}
};
class Rect : public Shape
{
public:
	// �ٽ� 1.
//	void draw() {}			// �����Լ� �����ǽ� �̷��� �ص� ������
//	virtual void draw() {}	// �ǵ��� �̷��� �ϼ���.

	// �ٽ� 2. �����Լ� �����ǽ� ��Ÿ�� �ִ� ���
	//virtual void Draw() {} // ������ �ƴմϴ�. �����Ϸ��� ���ο� �Լ��� �����ϰ� �˴ϴ�.

	// �� ������ �ʹ� �ɰ��߽��ϴ�. �׷��� C++11 ���� override Ű���尡 ���Խ��ϴ�.
	virtual void Draw() override {} // ��� Ŭ������ "Draw"�� ������ ����.

	// ��� : �����Լ� �����ǽ� �ǵ����̸� "override" ���̼���.
};

int main()
{
	Rect rc;
	Shape* p = &rc;
	p->draw();
}