#include <iostream>
// 149 page

// 핵심 : 기반 클래스로 사용되는 클래스를 만들때는
//		반드시 소멸자를 가상함수로 만들어야 한다.

class Base
{
public:
	Base() {}
	virtual ~Base() {} // 가상 소멸자
};
class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived(),  자원할당" << std::endl; }
	~Derived() { std::cout << "~Derived(), 자원반납" << std::endl; }
};
int main()
{
//	Derived d;

	Base* p = new Derived;	// 1. 메모리 할당
							// 2. 생성자 호출 - Derived()

	delete p;	// 1. 소멸자 호출
				//     A. p의 타입을 보고 소멸자 선택하면 => ~Base()
				//     B. p가 가리키는 메모리를 조사해서 소멸자를 선택하면 => ~Derived()

				// 2. p가 가리키는 메모리 해지
}