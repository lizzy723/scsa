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
	/*
	void init(const std::string& n, int a)
	{
		name = n;
		age = a;
	}
	*/
	// 생성자 : 클래스 이름과 동일한 이름의 함수
	//			반환 타입을 표기할수 없다.
	//			인자는 있어도 되고, 없어도 된다.
	//			객체 생성시 자동으로 호출된다.
	Person(const std::string& n, int a)
	{
		std::cout << "생성자 호출됨" << std::endl;
		name = n;
		age = a;
	}
};
int main()
{
	// 모든 멤버 데이타가 public 에 있으면 아래 처럼 초기화 가능합니다.
	// 하지만 멤버 데이타가 private 인 경우는 에러 입니다.
	// Person p = { "kim", 28 };
//	Person p;
//	p.init("kim", 28);

	Person p("kim", 28); // 이순간 자동으로 생성자 호출
}



