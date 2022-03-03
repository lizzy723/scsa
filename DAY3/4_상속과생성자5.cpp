// 4_상속과생성자4 - 상속1.cpp 복사
#include <iostream>
#include <string>

// 상속과생성자4 번이 가장 좋은데..

// 아래 처럼 할수 도 있기는 합니다.
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
		age = a; // 기반 클래스 멤버데이타는 초기화리스트 안됩니다. 여기서 접근해야 합니다.
				 // 또한, private에 있으면 안됩니다. protected나 public 이어야 합니다
	}
};



int main()
{
	Student s("kim", 28, 99);
}