// 7_�߻�Ŭ���� - 168 page

// �߻�Ŭ���� : ���� �����Լ��� �Ѱ� �̻� �ִ� Ŭ����
// Ư¡ : �߻�Ŭ������ ��ü�� ����� ����
// �ǵ� : Ư���� ��� �Լ��� �ݵ�� �����϶�� �����ϴ� ����.
class Shape
{
public:
	virtual void draw() = 0; // ���� �����Լ�(pure virtual function)
							 // �����ΰ� ����, "=0"���� ������ �����Լ�
	virtual ~Shape() {}
};

class Rect : public Shape
{
public:
	// draw()�� ������ ������ Rect �� �߻� �Դϴ�. ��ü ���� �ȵ˴ϴ�.
	// Rect�� ����ϰ� ������ �ݵ�� draw �����θ� ������ �մϴ�.
	virtual void draw() override {}
};

int main()
{
//	Shape  s; // error
	Shape* p; // ok.. ��ü �ƴ�.
	Rect r;
}