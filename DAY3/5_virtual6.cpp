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
	Derived()  { std::cout << "Derived(),  �ڿ��Ҵ�" << std::endl; }
	~Derived() { std::cout << "~Derived(), �ڿ��ݳ�" << std::endl; }
};
int main()
{
	Derived d;
}