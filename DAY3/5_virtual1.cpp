// 5_virtual1 - 140 page
#include <iostream>

class Animal
{	
public:
	int age;
};
class Dog : public Animal
{
public:
	int color;
};

int main()
{
	Dog dog;
	Dog*    p1 = &dog; // ok
//	int*    p2 = &dog; // error
	Animal* p3 = &dog; // ok. upcasting - 핵심!!

	// 핵심 1. 기반 클래스 포인터로 파생 클래스 객체를 가리킬수 있다.

	// 핵심 2. 기반 클래스 포인터로는 기반 클래스 멤버만 접근 가능하다.
	p3->age = 10;
	p3->color = 0; // error

	// 핵심 3. 메모리에 Dog 가 있음을 확신할수 있다면
	//        p3를 Dog* 로 캐스팅하면 color 접근 가능

	((Dog*)p3)->color = 0; // ok..
						   // 단, p3가 가리키는 곳이 Dog가 확실한 경우만 
						   // 사용해야 합니다.

}