// 7_추상클래스 - 168 page

// 추상클래스 : 순수 가상함수가 한개 이상 있는 클래스
// 특징 : 추상클래스는 객체를 만들수 없다
// 의도 : 특정한 멤버 함수를 반드시 구현하라고 지시하는 문법.
class Shape
{
public:
	virtual void draw() = 0; // 순수 가상함수(pure virtual function)
							 // 구현부가 없고, "=0"으로 끝나는 가상함수
	virtual ~Shape() {}
};

class Rect : public Shape
{
public:
	// draw()의 구현이 없으면 Rect 도 추상 입니다. 객체 생성 안됩니다.
	// Rect를 사용하고 싶으면 반드시 draw 구현부를 만들어야 합니다.
	virtual void draw() override {}
};

int main()
{
//	Shape  s; // error
	Shape* p; // ok.. 객체 아님.
	Rect r;
}