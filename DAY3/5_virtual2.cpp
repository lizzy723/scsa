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

class Cat : public Animal {};

void NewYear(Dog* p)
{
	++(p->age);
}

int main()
{
	Dog dog; NewYear(&dog); // ?
	Cat cat; NewYear(&cat); // ?
}