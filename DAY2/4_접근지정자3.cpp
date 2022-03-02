#include <iostream>
#include <string>

// C++ 스타일 
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

// C#, java, swift 등 다른 객체지향 언어
class Person
{
	// 각 멤버에 별도로 접근 지정자 표기
	private	std::string name;
	private int  age;

	public void setAge(int value)
	{
		if (value >= 0 && value < 150)
			age = value;
	}
};

// 파이썬이 접근 지정자가 없습니다. => 파이썬 커뮤니티에서 계속 만들자고 의견을 내고 있습니다.
//									그런데, 채택이 안되고 있습니다.
