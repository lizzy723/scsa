#include <iostream>

// 방법 3



class Car
{
	int color;
public:
//	int cnt = 0; // 객체당 한개씩 메모리에 생성됨.
	static int cnt; // 
	Car()  { ++cnt; }
	~Car() { --cnt; }
};
// static 멤버 데이타는 반드시 외부 선언이 필요 합니다
int Car::cnt = 0; // 초기화도 여기서 해야 합니다.

int main()
{
	// 객체가 없어도 Car::cnt 는 메모리에 이미존재 합니다.
	// (전역변수와 거의 동일합니다.)
	std::cout << Car::cnt << std::endl;

	Car c1;
	Car c2;

	// static 멤버 데이타 접근 방법(public인경우만)
	// 1. 클래스이름::static멤버데이타
	// 2. 객체이름.static멤버 데이타
	std::cout << Car::cnt << std::endl; // => 권장
	std::cout << c1.cnt   << std::endl; // => 이렇게 하면 cnt가 static 인지 아닌지
										//    알수 없습니다.
}