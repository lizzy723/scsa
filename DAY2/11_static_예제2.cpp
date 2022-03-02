#include <iostream>

// �Ʒ� �迭�� �ᱹ "Date" Ÿ�԰� ������ �ֽ��ϴ�.
// �Ʒ� ó�� �������� �ϴ� �� ���ٴ� Date Ŭ�������� private �� �����ϴ� ����
// �����մϴ�.
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
		Date temp(year, month, day + ds); //<= �߸��� ����Դϴ�.
								// <= ������ ���� ����� ������..
		return temp;
	}

	static int howManyDays(int month) { return days[month - 1]; }

	Date tomorrow()
	{
		Date temp(year, month, day + 1); // ���߿� ����� ������ ������
		return temp;
	}
};
int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
	Date today(2022, 3, 2);
	Date d = today.afterDays(1000);

	// 2���� ���ϱ��� �ִ��� �˰� �ʹ�.
	int n1 = today.howManyDays(2);
	int n2 = Date::howManyDays(2); // ��ü ���̵� ��밡���ϰ� ����.!

	// ���� ��¥�� �˰� �ʹ�.
	Date d2 = today.tomorrow();
}