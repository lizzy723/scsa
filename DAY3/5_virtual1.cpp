// 5_virtual1 - 140 page
#include <iostream>

class Animal
{	
public:
	int age;
};
class Dog : public Animal
{
public:
	int color;
};

int main()
{
	Dog dog;
	Dog*    p1 = &dog; // ok
//	int*    p2 = &dog; // error
	Animal* p3 = &dog; // ok. upcasting - �ٽ�!!

	// �ٽ� 1. ��� Ŭ���� �����ͷ� �Ļ� Ŭ���� ��ü�� ����ų�� �ִ�.

	// �ٽ� 2. ��� Ŭ���� �����ͷδ� ��� Ŭ���� ����� ���� �����ϴ�.
	p3->age = 10;
	p3->color = 0; // error

	// �ٽ� 3. �޸𸮿� Dog �� ������ Ȯ���Ҽ� �ִٸ�
	//        p3�� Dog* �� ĳ�����ϸ� color ���� ����

	((Dog*)p3)->color = 0; // ok..
						   // ��, p3�� ����Ű�� ���� Dog�� Ȯ���� ��츸 
						   // ����ؾ� �մϴ�.

}