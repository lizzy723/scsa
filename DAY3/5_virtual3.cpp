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

//	if (사용자입력값 == 1) p = &a;

	p->cry1(); // 객체 자체가 dog 이므로 2번이 호출되는것이 논리적으로 맞습니다.
			   // C++, C# : 1번 호출
			   // java, swift, python, kotlin : 2번

}
// 161 page 

// p->cry1() 을 어떤 함수와 연결할것인가 ? "함수 바인딩(binding)" 이라고 합니다.

// 1. static binding : 컴파일러가 컴파일시간에 어느 함수를 호출할지 결정하는것
//					컴파일 시간에는 p가 가리키는 곳이 어떤 객체인지 알수 없다.
//					p 자체의 타입(Animal*) 만 알수 있다.
//					p 의 타입만 가지고 호출결정
//					"Animal cry1" 호출
// 빠르지만, 논리적이지 않다.
// C++ 기본 정책, C# 기본 정책


// 2. dynamic binding : 컴파일시간에는 "p가 가리키는 곳을 조사하는 기계어 코드생성"
//					실행시에 p가 가리키는 곳을 조사해서 함수 호출을 결정
//					실제 어떤 객체가 있어는지에 따라 호출결정
//					Dog 객체가 있었다면 "Dog cry1" 호출
// 느리지만 논리적이다.
// java, swift, objective-c, python, kotlin 등의 대부분의 객체지향 언어
// C++/C# 의 가상함수(virtual)