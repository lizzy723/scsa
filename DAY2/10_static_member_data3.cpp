#include <iostream>

// ��� 3



class Car
{
	int color;
public:
//	int cnt = 0; // ��ü�� �Ѱ��� �޸𸮿� ������.
	static int cnt; // 
	Car()  { ++cnt; }
	~Car() { --cnt; }
};
// static ��� ����Ÿ�� �ݵ�� �ܺ� ������ �ʿ� �մϴ�
int Car::cnt = 0; // �ʱ�ȭ�� ���⼭ �ؾ� �մϴ�.

int main()
{
	// ��ü�� ��� Car::cnt �� �޸𸮿� �̹����� �մϴ�.
	// (���������� ���� �����մϴ�.)
	std::cout << Car::cnt << std::endl;

	Car c1;
	Car c2;

	// static ��� ����Ÿ ���� ���(public�ΰ�츸)
	// 1. Ŭ�����̸�::static�������Ÿ
	// 2. ��ü�̸�.static��� ����Ÿ
	std::cout << Car::cnt << std::endl; // => ����
	std::cout << c1.cnt   << std::endl; // => �̷��� �ϸ� cnt�� static ���� �ƴ���
										//    �˼� �����ϴ�.
}