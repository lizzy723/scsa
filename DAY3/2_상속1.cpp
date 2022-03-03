// 2_상속1 - 132page
#include <iostream>
#include <string>

// 모든 인간의 공통의 특징을 설계
class Person
{
	std::string name;
	int age;
};

// 상속 : 기존 타입(클래스)을 확장해서 새로운 타입(클래스)을 만드는 문법
// C++    : class Student : public Person 
// C#     : class Student : Person 
// python : class Student(Person)
// java   : class Student extends Person 

// Person  : Base(기반) class,    Super Class, Parent Class
// Student : Derived(파생) class, Sub Class,   Child Class
// 133 그림도 알아 두세요

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
