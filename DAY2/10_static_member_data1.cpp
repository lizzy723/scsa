// 10_static_member_data1 - 110 
#include <iostream>
// ��� 1. ��� ����Ÿ cnt ���
//  => ��� ����Ÿ�� ��ü�� �Ѱ��� ���� ���������.
//  => c1, c2 ������ ������ cnt�� ����Ѵ�.
//  => ��ü�� ���� �ľ� ����!!
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