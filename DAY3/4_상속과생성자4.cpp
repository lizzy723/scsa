// 4_��Ӱ�������4 - ���1.cpp ����
#include <iostream>
#include <string>

class Person
{
	std::string name;
	int age;
public:
	Person() {}
	Person(const std::string& n, int a) : name(n), age(a) {}
};

int main()
{
	Person p1;
	Person p2("kim", 28);
}