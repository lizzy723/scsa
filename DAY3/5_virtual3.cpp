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

//	if (������Է°� == 1) p = &a;

	p->cry1(); // ��ü ��ü�� dog �̹Ƿ� 2���� ȣ��Ǵ°��� �������� �½��ϴ�.
			   // C++, C# : 1�� ȣ��
			   // java, swift, python, kotlin : 2��

}
// 161 page 

// p->cry1() �� � �Լ��� �����Ұ��ΰ� ? "�Լ� ���ε�(binding)" �̶�� �մϴ�.

// 1. static binding : �����Ϸ��� �����Ͻð��� ��� �Լ��� ȣ������ �����ϴ°�
//					������ �ð����� p�� ����Ű�� ���� � ��ü���� �˼� ����.
//					p ��ü�� Ÿ��(Animal*) �� �˼� �ִ�.
//					p �� Ÿ�Ը� ������ ȣ�����
//					"Animal cry1" ȣ��
// ��������, �������� �ʴ�.
// C++ �⺻ ��å, C# �⺻ ��å


// 2. dynamic binding : �����Ͻð����� "p�� ����Ű�� ���� �����ϴ� ���� �ڵ����"
//					����ÿ� p�� ����Ű�� ���� �����ؼ� �Լ� ȣ���� ����
//					���� � ��ü�� �־������ ���� ȣ�����
//					Dog ��ü�� �־��ٸ� "Dog cry1" ȣ��
// �������� �����̴�.
// java, swift, objective-c, python, kotlin ���� ��κ��� ��ü���� ���
// C++/C# �� �����Լ�(virtual)