// 5_virtual3 - 144page - ���� �߿��� �����Դϴ�.
#include <iostream>

class Animal
{
	int age;
public:
	void cry1() { std::cout << "Animal Cry1" << std::endl; }
};

class Dog : public Animal
{
public:
};
int main()
{
	Animal a; a.cry1(); // ?
	Dog    d; d.cry1(); // ? 
	
	Animal* p = &d;
	p->cry1(); // ?

}