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
	int*    p2 = &dog; // error
	Animal* p3 = &dog; // ok. upcasting - ÇÙ½É!!
}