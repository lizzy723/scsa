// 5_생성자3 - 78page ~
#include <iostream>

class Point
{
	int x;
	int y;
public:
	// 1. 모든 객체는 생성시 반드시 생성자를 호출되야 한다.
	// 2. 사용자가 생성자를 한개도 만들지 않으면 "컴파일러가 인자 없는 생성자" 제공
	//	  ==> 인자 없는 생성자를 "default(기본) 생성자" 라고 합니다.

	Point()             { x=0; y=0; std::cout << "Point()"         << std::endl; } // 1
	Point(int a, int b) { x=a; y=b; std::cout << "Point(int, int)" << std::endl; } // 2
};
int main()
{
	Point p1;		// 1번생성자
	Point p2(1, 2); // 2번생성자

	// C++11 부터는 아래 처럼 객체 생성도 가능("일관된 초기화" 문법)
	Point p3{ 1,2 };   // 2번 생성자
	Point p4 = { 1,2 };// 2번 생성자.

	Point arr1[5]; // 1번 생성자 5회 호출
	Point arr2[5] = { {1,2},{2,3} }; // 2번 2회, 1번 3회 호출


	Point* p; // 객체 생성이 아님.. 생성자 호출 안됨

	p = (Point*)malloc( sizeof(Point) ); // 8 byte 크기의 메모리 할당해 달라는것
	free(p);							// 생성자 호출 안됨

	p = new Point; // 1번 생성자
	delete p;

	p = new Point(1, 1); // 2번 생성자
	delete p;
}