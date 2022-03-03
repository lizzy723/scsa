// 4_��Ӱ�������4 - ���1.cpp ����
#include <iostream>
#include <string>

class Person
{
	std::string name;
	int age;
public:
	// ����(����)�ϰ� �Ϸ���, ��� ����� �ݵ�� �ʱ�ȭ �Ǿ�� �Ѵ�.!!
	// ��� �Ҽ��� �ֽ��ϴ�. 
	// ��, ����Ʈ �����ڰ� ���� Ŭ������ �������� ���� �ֽ��ϴ�.
//	Person() : age(0) {}
	Person(const std::string& n, int a) : name(n), age(a) {}
};

// ���� Person �� Ȯ���ؼ� Student�� ����� ���� ������ ���ô�.
class Student : public Person
{
	int id;
public:
//	Student(int n) : id(n) {} // Student(int n) : Person(), id(n) {} ���κ��� �Ǵµ�
							  // Person �� ����Ʈ �����ڰ� ����. error
	// �Ʒ� ó�� ����� ���� ���� �Դϴ�.
	Student(const std::string& n, int a, int d) : Person(n, a), id(d) {}
};

int main()
{
//	Student s(99); 
	Student s("kim", 28, 99);

//	Person p1;		// error
	Person p2("kim", 28); // ok
}