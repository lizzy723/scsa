// 5_virtual1 - 140 page
#include <iostream>

class Animal
{
	int age;
public:
	void cry1() { std::cout << "Animal cry1" << std::endl; }
};

class Dog : public Animal
{
public:
	int color;
};

int main()
{
	Dog dog;
	Dog* p1 = &dog;
	int* p2 = &dog;
	Animal* p3 = &dog;
}