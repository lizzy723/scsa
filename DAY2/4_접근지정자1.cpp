// 4_����������1 - 74page
#include <iostream>
#include <string>

// 3. Ÿ���� ���鶧 "�߸� ����ϱ� ��ư�, ����� ����ϱ� ����" ������.
//    ������ Ÿ���� ������!

// ���α׷��� ����� ���� "���"�� ������ �ʿ䰡 �ְ� �Ǿ����ϴ�.
struct Person
{
private:				// private ���� ������
	std::string name;	// �� �Ʒ� �κп� �ִ� ��� ����� ��� �Լ��� ���ٰ����ϴ�
	int  age;			// ����� �ƴ� �Լ����� ���ٽ� ����.!

public:
	void setAge(int value)
	{
		age = value;
	}
};

int main()
{
	Person p;

//	p.age = -10; // ������� �Ǽ��� ���°� �Ҿ��� ��ü�� �����Ǿ���.
				// error. private �� �ִ� ���.
	p.setAge(-10);
				 
}
