// 5_생성자1.cpp
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
		std::cout << "생성자 호출됨" << std::endl;
		name = n;
		age = a;
	}	
	Person()
	{
		name = "unknown";
		age = 0;
	}
	// 소멸자 : "~클래스이름" 모양의 함수
	//			반환값과 인자가 없다. 오직 한개만 만들수 있다.
	//		    객체가 파괴 될때 호출.
	~Person() { std::cout << "소멸자" << std::endl; }
};
int main()
{
	Person p1("kim", 28); 

	Person p2;

} //<== p2, p1 파괴. 소멸자 호출됨



