// 10_static_member_data1 - 110 
#include <iostream>
// 방법 1. 멤버 데이타 cnt 사용
//  => 멤버 데이타는 객체당 한개씩 따로 만들어진다.
//  => c1, c2 생성시 별도의 cnt를 사용한다.
//  => 객체의 갯수 파악 실패!!
class Car
{
	int color;
public:
	int cnt = 0;

	Car()  { ++cnt; }
	~Car() { --cnt; }
};
int main()
{
	Car c1;
	Car c2;

	std::cout << c1.cnt << std::endl;
}