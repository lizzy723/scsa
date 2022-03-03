// 5_virtual3 - 144page - 아주 중요한 내용입니다.
#include <iostream>

class Animal
{
	int age;
public:
	void cry1() { std::cout << "Animal Cry1" << std::endl; }  // 1
};

class Dog : public Animal
{
public:
	// function override : 기반 클래스 멤버 함수를 파생클래스가 다시 만드는것
	// function overloading 과 헷갈리지 마세요.(square(int), square(double))
	void cry1() { std::cout << "Dog Cry1" << std::endl; }	// 2
};

int main()
{
	Animal a; a.cry1(); // 1
	Dog    d; d.cry1(); // 2 
	
	Animal* p = &d;
	p->cry1(); // 객체 자체가 dog 이므로 2번이 호출되는것이 논리적으로 맞습니다.
			   // C++, C# : 1번 호출
			   // java, swift, python, kotlin : 2번

}