// 4_상속과생성자4 - 상속1.cpp 복사
#include <iostream>
#include <string>

class Person
{
	std::string name;
	int age;
public:
	// 안전(엄격)하게 하려면, 모든 사람은 반드시 초기화 되어야 한다.!!
	// 라고 할수도 있습니다. 
	// 즉, 디폴트 생성자가 없는 클래스가 생각보다 많이 있습니다.
//	Person() : age(0) {}
	Person(const std::string& n, int a) : name(n), age(a) {}
};

// 이제 Person 을 확장해서 Student를 만드는 것을 생각해 봅시다.
class Student : public Person
{
	int id;
public:
//	Student(int n) : id(n) {} // Student(int n) : Person(), id(n) {} 으로변경 되는데
							  // Person 은 디폴트 생성자가 없다. error
	// 아래 처럼 만드는 것이 정답 입니다.
	Student(const std::string& n, int a, int d) : Person(n, a), id(d) {}
};

int main()
{
//	Student s(99); 
	Student s("kim", 28, 99);

//	Person p1;		// error
	Person p2("kim", 28); // ok
}