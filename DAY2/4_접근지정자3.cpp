#include <iostream>
#include <string>

// C++ ��Ÿ�� 
class Person
{
private:				
	std::string name;
	int  age;

public:
	void setAge(int value)
	{
		if (value >= 0 && value < 150)
			age = value;
	}
};

// C#, java, swift �� �ٸ� ��ü���� ���
class Person
{
	// �� ����� ������ ���� ������ ǥ��
	private	std::string name;
	private int  age;

	public void setAge(int value)
	{
		if (value >= 0 && value < 150)
			age = value;
	}
};

// ���̽��� ���� �����ڰ� �����ϴ�. => ���̽� Ŀ�´�Ƽ���� ��� �����ڰ� �ǰ��� ���� �ֽ��ϴ�.
//									�׷���, ä���� �ȵǰ� �ֽ��ϴ�.
