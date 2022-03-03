// 1_상수멤버함수1
#include <iostream>
// 119 page 입니다.
class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) {}

	void set(int a, int b)
	{
		x = a;
		y = b;
	}
	// 상수 멤버 함수 : 멤버 함수 () 뒤에 const 를 붙이는 문법
	//				   멤버 함수 안에서 멤버 데이타를 수정하지 않을것이라는 약속
	//			       상수 객체의 경우는 상수 멤버 함수만 호출가능하다.
	void print() const 
	{
//		x = 10; // error.  상수 멤버함수 안에서는 멤버 데이타를 수정할수 없다.

		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	const Point pt(1, 2);

	pt.x = 10;      // error. public 에 있지만 상수 이므로 변경안됨!
	pt.set(10, 20); // error. 
	pt.print();     // error
					// 단, print()가 상수 멤버함수라면 에러 아님..
	// 핵심 : "상수객체는 상수 멤버 함수만 호출 가능하다"
}