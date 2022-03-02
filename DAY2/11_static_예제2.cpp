#include <iostream>

// 아래 배열은 결국 "Date" 타입과 관련이 있습니다.
// 아래 처럼 전역으로 하는 것 보다는 Date 클래스에서 private 에 관리하는 것이
// 안전합니다.
// int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

class Date
{
	int year;
	int month;
	int day;
	static int days[12];
public:
	Date(int y, int m, int d) : year(y), month(m), day(d) {}

	Date afterDays(int ds)
	{
		Date temp(year, month, day + ds); //<= 잘못된 계산입니다.
								// <= 구현은 직접 만들어 보세요..
		return temp;
	}

	static int howManyDays(int month) { return days[month - 1]; }

	Date tomorrow()
	{
		Date temp(year, month, day + 1); // 나중에 제대로 구현해 보세요
		return temp;
	}
};
int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
	Date today(2022, 3, 2);
	Date d = today.afterDays(1000);

	// 2월이 몇일까지 있는지 알고 싶다.
	int n1 = today.howManyDays(2);
	int n2 = Date::howManyDays(2); // 객체 없이도 사용가능하게 하자.!

	// 내일 날짜를 알고 싶다.
	Date d2 = today.tomorrow();
}