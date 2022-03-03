// 10_복사생성자1 - 92 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point()             : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2

	// 복사 생성자 : 자신과 동일한 타입의 객체 한개를 인자로 가지는 생성자
	//			    사용자가 만들지 않으면 컴파일러가 제공
	// 컴파일러가 제공하는 것은 아래와 동일
	Point(const Point& p) : x(p.x), y(p.y)
	{
	}
};
int main()
{
	// 아래 4줄을 생각해 보세요
	Point p1;		// ok.. 1번 생성자
	Point p2(1, 2);	// ok.. 2번 생성자
//	Point p3(1);	// error. Point(int) 모양의 생성자는 없다!
	
	Point p4(p2);	// ok.    Point(Point) 모양의 생성자 필요!

	Point p5 = p2;  // ok.. 위와 동일
}