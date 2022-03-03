#include <iostream>

class Animal
{
	int age;
public:
	// non-virtual : static binding �մϴ�.
	void cry1() { std::cout << "Animal Cry1" << std::endl; }  

	// virtual function : dynamic binding �ش޶�� ���þ� �Դϴ�.
	virtual void cry2() { std::cout << "Animal Cry2" << std::endl; }
};

class Dog : public Animal
{
public:
	void cry1() { std::cout << "Dog Cry1" << std::endl; }	
	virtual void cry2() { std::cout << "Dog Cry2" << std::endl; }
};
int main()
{
	Animal a; 
	Dog    d; 

	Animal* p = &d;
	p->cry1();  // static binding : ������ ������ Ÿ������ ȣ�� ����
	p->cry2();  // dynamic binding : ����� p�� ����Ű�� �޸� ������ ȣ�� ����

}
