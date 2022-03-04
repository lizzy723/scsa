// 2_연산자재정의1
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}
};
int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 2개의 점을 더하려고 합니다. 다음중 제일 좋아 보이는 코드를 선택해 보세요
	Point p3 = add(p1, p2); // 1
	Point p4 = p1.add(p2);	// 2
	Point p5 = p1 + p2;		// 3
}