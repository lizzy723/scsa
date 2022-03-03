#include <iostream>
#include <cstring>

// Ŭ���� ���ο� ������ ����� �ְ� �޸� �����Ҵ��ϴ� �ڵ尡 �ִٸ�
// �����Ϸ��� �����ϴ� ����Ʈ ���� �����ڴ� "��������(Shallow Copy)" ������ �ֽ��ϴ�.


// �ݵ�� ����ڰ� ���� �����ڸ� ���� �ذ��ؾ� �մϴ�.




// 103 page �׸� ���� �ϼ���.
class Person
{
	char* name;
	int age;
public:
	Person(const char* s, int a) : age(a)
	{
		name = new char[strlen(s) + 1];
		strcpy_s(name, strlen(s) + 1, s); 
	}
	~Person() { delete[] name; }

	// ����ڰ� ����� ���� ������
	// �Ʒ� �ڵ尡 "���� ����(Deep Copy)"�� ������ �ڵ� �Դϴ�.
	Person(const Person& p) : age(p.age)
	{
		// 1. �����Ͱ� �ƴ� ����� �׳� ����
//		age = p.age; // �̷��� �������� �ʱ�ȭ����Ʈ��!

		// 2. ������ ����� �ּҸ� �������� ����
		//    �޸� ��ü�� ����
		name = new char[strlen(p.name) + 1];

		strcpy_s(name, strlen(p.name) + 1, p.name);
	}
};

int main()
{
	Person p1("kim", 2);

	Person p2 = p1; // ���� ������ ȣ��
					// ����ڰ� ������ ������ �����Ϸ��� ����
}

