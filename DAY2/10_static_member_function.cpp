// 10_static_member_function
#include <iostream>

class Car
{
	int color;
	static int cnt;  
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

//	int getCount() { return cnt; } // ��ü�� �־�߸� ȣ�Ⱑ���� �Լ�
	static int getCount() { return cnt; } // ��ü�� ��� ȣ�Ⱑ���� ��� �Լ�
};
int Car::cnt = 0; // private �� �־ ���ڵ�� �����մϴ�.

int main()
{
	// static ��� �Լ��� "Ŭ�����̸�::�Լ��̸�"���� ȣ�Ⱑ���մϴ�.
	std::cout << Car::getCount() << std::endl;

	Car c1;
	Car c2;

	std::cout << Car::getCount() << std::endl; // => ����
	std::cout << c1.getCount() << std::endl;   // �̷��� �ϸ� getCount()�� 
										// static���� �ƴ��� �����ȵ˴ϴ�.
}


