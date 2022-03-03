// 5_virtual1 - 140 page
#include <iostream>
#include <vector>

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

class Cat : public Animal {};

// upcasting 장점 1. 
//void NewYear(Dog* p)  // Dog만 처리가능한 함수
void NewYear(Animal* p) // 모든 동물, 동종(동일 기반 클래스의 파생클래스)
{						// 을 처리 가능한 함수
	++(p->age);

	// 단, 이 안에서는 모든 동물의 공통의 특징(age)만 접근 가능
	// Dog를 전달해도 아래처럼 color 접근은 안됩니다.
//	p->color = 10; // error
}
int main()
{
	Dog dog; NewYear(&dog); // ?
	Cat cat; NewYear(&cat); // ?

	std::vector<Dog*> v1;    // Dog 만 보관 가능한 vector
	std::vector<Animal*> v2; // 모든 동물을 보관하는 vector.
							// upcasting 장점 2. 동종을 보관하는 컨테이너 만들기!
}