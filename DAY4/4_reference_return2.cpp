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

Point pt(1, 2);

// 아래 2개의 함수를 잘 생각해 보세요
Point& f1()
{
	return pt; // pt는 전역변수이므로 함수 호출이 종료되어도 파괴 안됩니다.
				// 참조리턴 해도 됩니다.
}

Point& f2()
{
	Point p(1, 2); // 지역변수는 함수 호출 종료시 파괴됩니다.
	return p;	   // 절대로 참조 반환하면 안됩니다.!! - 버그입니다.
}				   // ==> 컴파일 에러는 나오지 않지만.. 절대 이렇게 사용하면 안됩니다.
				   // 지역변수를 반환할때는 "값 타입 반환" 만 사용하세요.!

Point f3()
{
	Point p(1, 2);
	return p; // ok.. 값반환해야 합니다.
				// 함수가 종료되므로 p는 파괴 됩니다. 그런데, 반환값이 필요합니다.
				// 그래서
				// 1. 파괴되기전에 반환용 임시객체를 만들고
				// 2. p가 파괴되고
				// 3. 1에서 만든 임시객체로 반환하는 원리 입니다.
}

int main()
{

}

