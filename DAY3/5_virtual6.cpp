#include <iostream>

class Base
{
public:
	Base() {}
	~Base() { }
};
class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived(),  자원할당" << std::endl; }
	~Derived() { std::cout << "~Derived(), 자원반납" << std::endl; }
};
int main()
{
	Derived d;
}