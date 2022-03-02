// 11_static_예제1
#include <iostream>

// 프로그램에서 날짜를 다루는 작업을 해야 한다.
// 하나의 클래스는 "하나의 책임"만 가지는 것이 좋다.
// => 단일 책임의 원칙 (SRP, Single Responsibility Principle)
class Date
{
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d) : year(y), month(m), day(d) {}
};
int main()
{
	Date today(2022, 3, 2);
}