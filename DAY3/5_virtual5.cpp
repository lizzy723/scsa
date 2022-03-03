// 5_virtual5

class Shape
{
public:
	virtual void draw() {}
};
class Rect : public Shape
{
public:
	// 핵심 1.
//	void draw() {}			// 가상함수 재정의시 이렇게 해도 되지만
//	virtual void draw() {}	// 되도록 이렇게 하세요.

	// 핵심 2. 가상함수 재정의시 오타가 있는 경우
	//virtual void Draw() {} // 에러가 아닙니다. 컴파일러가 새로운 함수로 생각하게 됩니다.

	// 위 문제가 너무 심각했습니다. 그래서 C++11 부터 override 키워드가 나왔습니다.
	virtual void Draw() override {} // 기반 클래스에 "Draw"가 없으면 에러.

	// 결론 : 가상함수 재정의시 되도록이면 "override" 붙이세요.
};

int main()
{
	Rect rc;
	Shape* p = &rc;
	p->draw();
}