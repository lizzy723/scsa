// 5_virtual3 - 144page - ���� �߿��� �����Դϴ�.
#include <iostream>

class Animal
{
	int age;
public:
	void cry1() { std::cout << "Animal Cry1" << std::endl; }  // 1
};

class Dog : public Animal
{
public:
	// function override : ��� Ŭ���� ��� �Լ��� �Ļ�Ŭ������ �ٽ� ����°�
	// function overloading �� �򰥸��� ������.(square(int), square(double))
	void cry1() { std::cout << "Dog Cry1" << std::endl; }	// 2
};

int main()
{
	Animal a; a.cry1(); // 1
	Dog    d; d.cry1(); // 2 
	
	Animal* p = &d;
	p->cry1(); // ��ü ��ü�� dog �̹Ƿ� 2���� ȣ��Ǵ°��� �������� �½��ϴ�.
			   // C++, C# : 1�� ȣ��
			   // java, swift, python, kotlin : 2��

}