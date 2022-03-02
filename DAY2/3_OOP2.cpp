#include <iostream>

// 객체지향 프로그래밍의 핵심 1. 프로그램에서 필요한 타입을 먼저 설계하자.

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

int getRectArea(const Rect& rc)
{
	return (rc.right - rc.left) * (rc.bottom - rc.top);
}

void drawRect(const Rect& rc)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	Rect rc = { 1,1, 10,10 };

	int n1 = getRectArea(rc);
	drawRect(rc);
}