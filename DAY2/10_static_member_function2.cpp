// 10_static_member_function
#include <iostream>

class Car
{
	int color;		// �ν��Ͻ� ���, ��ü�� �Ѱ��� ����. ��� �ڵ����� ������ �ٸ��Ƿ�!
	static int cnt; // Ŭ���� ���, ��� ��ü�� ���� �մϴ�.
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

	//	int getCount() { return cnt; }    // ��ü�� �־�߸� ȣ�Ⱑ���� �Լ�
	static int getCount() { return cnt; } // ��ü�� ��� ȣ�Ⱑ���� ��� �Լ�
};
int Car::cnt = 0;

int main()
{
	std::cout << Car::getCount() << std::endl;

	Car c1;
	Car c2;

	std::cout << Car::getCount() << std::endl; 
}

