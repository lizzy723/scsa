#include <iostream>

// 방법 2.

// 방법 2. 전역변수 cnt 사용
//    => 객체에 갯수에 상관없이 모든 객체가 공유 한다.
//    => 객체의 갯수 파악 성공..
// 그런데!!!
//   => 전역변수는 모든 곳에서 접근할수 있다
//   => Car 만 사용하도록 접근지정자를 사용할수 없을까 ??? 
//   => 전역변수는 접근지정자 사용할수 없다.!!
int cnt = 0;

class Car
{
	int color;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }
};
int main()
{
	Car c1;
	Car c2;

	cnt = 100; // 사용자가 실수 했다.!

	std::cout << cnt << std::endl; // 2
}