// 4_상속과생성자4 - 상속1.cpp 복사
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