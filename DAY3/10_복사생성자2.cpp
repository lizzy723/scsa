#include <iostream>
#include <cstring>

class Person
{
	char* name;
	int age;
public:
	Person(const char* s, int a) : age(a)
	{
	}
};

int main()
{
	Person p1("kim", 28);
}

