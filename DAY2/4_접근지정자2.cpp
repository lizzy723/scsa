#include <iostream>
#include <string>

// struct vs class
// struct : 접근지정자 생략시 디폴트가 "public"
// class  : 접근지정자 생략시 디폴트가 "private"

// C++에서는 위 차이점만 있고, 완벽히 동일합니다.

// 다른언어(C#, java등)은 차이가 많습니다


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
