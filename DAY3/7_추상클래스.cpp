// 7_�߻�Ŭ���� - 168 page

class Shape
{
public:
	virtual void draw() = 0; // ���� �����Լ�(pure virtual function)

	virtual ~Shape() {}
};

class Rect : public Shape
{
public:
};
int main()
{
	Shape  s;
	Shape* p;
	Rect r;
}