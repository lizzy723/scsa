// 7_추상클래스 - 168 page

class Shape
{
public:
	virtual void draw() = 0; // 순수 가상함수(pure virtual function)

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