#include <iostream>
#include <cstring>

class Person
{
	char* name;
	int age;
public:
	Person(const char* s, int a) : age(a)
	{
		name = new char[strlen(s) + 1];

		strcpy_s(name, strlen(s) + 1, s); // strcpy 의 보안 강화 버전
	}
	~Person() { delete[] name; }
};

int main()
{
	Person p1("kim", 28);
}

