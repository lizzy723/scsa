#include <iostream>

class Animal
{
	int age;
public:
	// non-virtual : static binding 합니다.
	void cry1() { std::cout << "Animal Cry1" << std::endl; }  

	// virtual function : dynamic binding 해달라는 지시어 입니다.
	virtual void cry2() { std::cout << "Animal Cry2" << std::endl; }
};

class Dog : public Animal
{
public:
	void cry1() { std::cout << "Dog Cry1" << std::endl; }	
	virtual void cry2() { std::cout << "Dog Cry2" << std::endl; }
};
int main()
{
	Animal a; 
	Dog    d; 

	Animal* p = &d;
	p->cry1();  // static binding : 무조건 포인터 타입으로 호출 결정
	p->cry2();  // dynamic binding : 실행시 p가 가리키는 메모리 조사후 호출 결정

}
