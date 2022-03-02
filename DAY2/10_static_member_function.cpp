// 10_static_member_function
#include <iostream>

class Car
{
	int color;
	static int cnt;  
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

//	int getCount() { return cnt; } // 객체가 있어야만 호출가능한 함수
	static int getCount() { return cnt; } // 객체가 없어도 호출가능한 멤버 함수
};
int Car::cnt = 0; // private 에 있어도 이코드는 가능합니다.

int main()
{
	// static 멤버 함수는 "클래스이름::함수이름"으로 호출가능합니다.
	std::cout << Car::getCount() << std::endl;

	Car c1;
	Car c2;

	std::cout << Car::getCount() << std::endl; // => 권장
	std::cout << c1.getCount() << std::endl;   // 이렇게 하면 getCount()가 
										// static인지 아닌지 구별안됩니다.
}


