// 5_������1.cpp
#include <iostream>
#include <string>

class Person
{
//public:
private:
	std::string name;
	int  age;

public:
	/*
	void init(const std::string& n, int a)
	{
		name = n;
		age = a;
	}
	*/
	// ������ : Ŭ���� �̸��� ������ �̸��� �Լ�
	//			��ȯ Ÿ���� ǥ���Ҽ� ����.
	//			���ڴ� �־ �ǰ�, ��� �ȴ�.
	//			��ü ������ �ڵ����� ȣ��ȴ�.
	Person(const std::string& n, int a)
	{
		std::cout << "������ ȣ���" << std::endl;
		name = n;
		age = a;
	}
};
int main()
{
	// ��� ��� ����Ÿ�� public �� ������ �Ʒ� ó�� �ʱ�ȭ �����մϴ�.
	// ������ ��� ����Ÿ�� private �� ���� ���� �Դϴ�.
	// Person p = { "kim", 28 };
//	Person p;
//	p.init("kim", 28);

	Person p("kim", 28); // �̼��� �ڵ����� ������ ȣ��
}



