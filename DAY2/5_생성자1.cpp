// 5_생성자1.cpp
#include <iostream>
#include <string>

class Person
{
//public:
private:
	std::string name;
	int  age;

public:
	void init(const std::string& n, int a)
	{
		name = n;
		age = a;
	}
};

int main()
{
	// 모든 멤버 데이타가 public 에 있으면 아래 처럼 초기화 가능합니다.
	// 하지만 멤버 데이타가 private 인 경우는 에러 입니다.
	// Person p = { "kim", 28 };

	Person p;
	p.init("kim", 28);
}



