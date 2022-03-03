// 5_virtual3 - 144page - 아주 중요한 내용입니다.
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