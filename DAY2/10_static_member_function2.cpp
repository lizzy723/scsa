// 10_static_member_function
#include <iostream>

class Car
{
	int color;		// 인스턴스 멤버, 객체당 한개씩 생성. 모든 자동차는 색상이 다르므로!
	static int cnt; // 클래스 멤버, 모든 객체가 공유 합니다.
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

	//	int getCount() { return cnt; }    // 객체가 있어야만 호출가능한 함수
	static int getCount() { return cnt; } // 객체가 없어도 호출가능한 멤버 함수
};
int Car::cnt = 0;

int main()
{
	std::cout << Car::getCount() << std::endl;

	Car c1;
	Car c2;

	std::cout << Car::getCount() << std::endl; 
}

