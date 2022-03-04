// 4_reference_return1 - 좀 어려운데.. 꼭 알아 두세요
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}

	~Point() { std::cout << "~Point()" << std::endl; }
};

// 아래 2개함수의 차이점을 먼저 명확히 이해해 보세요
/*
void f1(Point  p1) {} // call by value     : 복사본 객체 생성
void f2(Point& p2) {} // call by reference : 복사본 객체 생성 안됨

int main()
{
	Point pt(1, 2);
	f1(pt);
	f2(pt);
}
*/

// 아래 코드가 어렵습니다.
Point pt(1, 2);

Point f3() // return by value : 리턴용 복사본객체를 만들어서
{			//					반환 합니다.
			//				리턴용 복사본 객체는 함수 호출문장의 끝에서 파괴됩니다.
	return pt;
}

Point& f4()  // return by reference : 리턴용 임시객체를 만들지 말고
{			//					pt 자체의 별명을 반환해 달라.
	return pt;
}

int main()
{
	std::cout << "----------" << std::endl;
//	f3();
	f4();
	std::cout << "----------" << std::endl;
}