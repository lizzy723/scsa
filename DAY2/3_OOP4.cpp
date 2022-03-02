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
	int n1 = 10; // n1 은 "variable(변수), 변하는 수"

	Rect r1 = { 1,1,10,10 }; // r1은 "변수" 라는 용어보다 "객체(object)"라고합니다.
	Rect r2 = { 1,1,10,10 };
}
// 엄격히 이야기 하면 "n1, r1, r2" 모두 객체(object) 입니다.
// 그런데, 관례상
// primitive 타입의 객체 : "변수"
// user 타입의 객체      : "객체(object)"라고 합니다.

// 객체 r1, r2 생성시
// 1. 멤버 데이타만 r1, r2 따로 놓이게 됩니다.
// 2. 멤버 함수는 객체의 갯수에 상관없이 코드 메모리에 한개만 있습니다.
// 3. 따라서, sizeof(Rect) => 16 입니다.