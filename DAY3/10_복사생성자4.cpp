#include <iostream>
#include <cstring>
#include <string>

// ������ "���ڿ��� �ʿ��ϸ� char* ������� ����
//       "std::string" ����ϸ� �˴ϴ�.

// ���� ���� �ڵ�
class Person
{
	std::string name;
	int age;
public:
	Person(const std::string& n, int a) : name(n), age(a)
	{
	}
};

int main()
{
	Person p1("kim", 2);

	Person p2 = p1; 
}

