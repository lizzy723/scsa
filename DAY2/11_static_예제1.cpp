// 11_static_����1
#include <iostream>

// ���α׷����� ��¥�� �ٷ�� �۾��� �ؾ� �Ѵ�.
// �ϳ��� Ŭ������ "�ϳ��� å��"�� ������ ���� ����.
// => ���� å���� ��Ģ (SRP, Single Responsibility Principle)
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