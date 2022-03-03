// 4_상속과생성자1 - 135page

#include <iostream>
// Derived 객체 생성시
// 1. 기반 클래스 생성자가 호출 - 항상 디폴트 버전 사용
// 2. 파생 클래스 생성자 호출.

// 그런데, 정확한 원리가 중요합니다.

class Base
{
	int data1;
public:
	Base()      { std::cout << "Base()"    << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base()     { std::cout << "~Base()"   << std::endl; }
};

class Derived : public Base
{
	int data2;
public:
	Derived()      { std::cout << "Derived()"    << std::endl; }
	Derived(int a) { std::cout << "Derived(int)" << std::endl; }
	~Derived()     { std::cout << "~Derived()"   << std::endl; }
};

int main()
{
//	Derived d1; // 이순간 결과를 예측해 보세요
	Derived d2(5);
}