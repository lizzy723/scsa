// 5_������1.cpp
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
public:
	Person(const std::string& n, int a)
	{
		std::cout << "������ ȣ���" << std::endl;
		name = n;
		age = a;
	}	
	Person()
	{
		name = "unknown";
		age = 0;
	}
	// �Ҹ��� : "~Ŭ�����̸�" ����� �Լ�
	//			��ȯ���� ���ڰ� ����. ���� �Ѱ��� ����� �ִ�.
	//		    ��ü�� �ı� �ɶ� ȣ��.
	~Person() { std::cout << "�Ҹ���" << std::endl; }
};
int main()
{
	Person p1("kim", 28); 

	Person p2;

} //<== p2, p1 �ı�. �Ҹ��� ȣ���



