// 2_���1 - 132page
#include <iostream>
#include <string>

// ��� �ΰ��� ������ Ư¡�� ����
class Person
{
	std::string name;
	int age;
};

// ��� : ���� Ÿ��(Ŭ����)�� Ȯ���ؼ� ���ο� Ÿ��(Ŭ����)�� ����� ����
// C++    : class Student : public Person 
// C#     : class Student : Person 
// python : class Student(Person)
// java   : class Student extends Person 

// Person  : Base(���) class,    Super Class, Parent Class
// Student : Derived(�Ļ�) class, Sub Class,   Child Class
// 133 �׸��� �˾� �μ���

class Student : public Person 
{
	int id;
};

class Professor : public Person
{
	int major;
};

int main()
{
	Student   s;
	Professor p;
}
