#include <iostream>
#include <string>

// struct vs class
// struct : ���������� ������ ����Ʈ�� "public"
// class  : ���������� ������ ����Ʈ�� "private"

// C++������ �� �������� �ְ�, �Ϻ��� �����մϴ�.

// �ٸ����(C#, java��)�� ���̰� �����ϴ�


//struct Person
class Person
{
//private:				
	std::string name;	
	int  age;			

public:
	void setAge(int value)
	{
		if (value >= 0 && value < 150)
			age = value;
	}
};

int main()
{
	Person p;

	p.setAge(-10);

}
