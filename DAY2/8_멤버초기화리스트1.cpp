// 8_����ʱ�ȭ����Ʈ1 - 85page
#include <iostream>
#include <string>

class Person
{
	std::string name;
	int  age;
public:
	// member initializer list : �����ڵڿ� : �� ���� ����� �ʱ�ȭ �ϴ� ��
	Person(const std::string& n, int a) 
				: name(n), age(a)  // ���� �ڵ�.   "�ʱ�ȭ" �Դϴ�.
	{
	//	name = n; // ���� ���� �ڵ�!  ==> "����" �Դϴ�.
	//	age = a;
	}
};
int main()
{
	Person p("kim", 28);

	// �ʱ�ȭ vs ����
	// 1. �Ʒ� ó�� primitive type �� ���� ������ �����ϴ�.
	int a = 28; // �ʱ�ȭ, ����鼭 �ִ°�
	int b;
	b = 28;     // ����. �����Ŀ� �ִ°�

	// 2. user type
	std::string name1("kim"); // ���ڰ� �Ѱ��� ������ 1ȸ ȣ��� �ʱ�ȭ��.

	std::string name2;	// 1. ����Ʈ ������ ȣ��(���� ���� ������)
	name2 = "kim";		// 2. ���Կ�����(name2.operator=("kim")) ��� �Լ�ȣ��
						// ��, 2ȸ�� �Լ� ȣ��� �ʱ�ȭ ��.

	// ����, �ʱ�ȭ�� ������ ������ �ȵǴ� �͵� �ֽ��ϴ�
	const int c = 10; // ok. �ʱ�ȭ ����
	c = 20; // error. ���� �ȵ�

}