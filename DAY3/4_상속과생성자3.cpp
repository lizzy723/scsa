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
//	Base() {  }
	Base(int a) {  }
	~Base() { }
};
class Derived : public Base
{
	int data2;
public:
	// 사용자가 만든 코드		// 컴파일러가 변경한 코드
//	Derived() { }			// Derived()      : Base() { }	
//	Derived(int a) { }		// Derived(int a) : Base() { }
	~Derived() { }			// ~Derived()     { ....; ~Base(); }

	// 기반 클래스에 디폴트 생성자가 없는 경우는
	// "반드시 파생 클래스 생성자에서 기반 클래스 생성자를 명시적으로 호출해야 합니다."!!
	Derived()      : Base(0) { }
	Derived(int a) : Base(a) { }
};
int main()
{
	Derived d1;			// call Derived::Derived() 
//	Derived d2(5);      // call Derived::Derived(int)  의 코드 생성
} 