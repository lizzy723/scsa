// 4_��Ӱ�������4 - ���1.cpp ����
#include <iostream>
#include <string>

// ��Ӱ�������4 ���� ���� ������..

// �Ʒ� ó�� �Ҽ� �� �ֱ�� �մϴ�.
class Person
{
protected:
	std::string name;
	int age;
public:
	Person() {}
	Person(const std::string& n, int a) : name(n), age(a) {}
};

class Student : public Person
{
	int id;
public:
	Student(const std::string& n, int a, int d) : id(d)   // Person()
	{
		name = n;
		age = a; // ��� Ŭ���� �������Ÿ�� �ʱ�ȭ����Ʈ �ȵ˴ϴ�. ���⼭ �����ؾ� �մϴ�.
				 // ����, private�� ������ �ȵ˴ϴ�. protected�� public �̾�� �մϴ�
	}
};



int main()
{
	Student s("kim", 28, 99);
}