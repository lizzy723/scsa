#include <iostream>

// 객체지향 프로그래밍의 핵심 1. 프로그램에서 필요한 타입을 먼저 설계하자.

// 2. 타입을 만들때 "상태를 나타내는 데이타와 상태를 가지고 연산을 수행하는 함수"를
//    묶어서 타입을 만들자

// C 구조체 : 함수를 포함할수 없다.!
// C++구조체 : 함수를 포함할수 있다.

// 데이타와 함수를 묶는 것이 사용할때 훨씬 편리하고, 안전(?)하다. (다음예제에서 설명)

struct Rect
{
	// 멤버 데이타 ( 필드라고도 합니다.)
	int left;
	int top;
	int right;
	int bottom;

	// 멤버 함수 ( 메소드 라고도 합니다.)
	int getArea() {	return (right - left) * (bottom - top);	}
	void draw()   {	std::cout << "draw rect" << std::endl;	}
};
int main()
{
	Rect rc = { 1,1, 10,10 };

//	int n1 = getRectArea(rc);
//	drawRect(rc);

	int n1 = rc.getArea();
	rc.draw();
}