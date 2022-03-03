#include <iostream>
#include <cstring>

// 클래스 내부에 포인터 멤버가 있고 메모리 동적할당하는 코드가 있다면
// 컴파일러가 제공하는 디폴트 복사 생성자는 "얕은복사(Shallow Copy)" 현상이 있습니다.


// 반드시 사용자가 복사 생성자를 만들어서 해결해야 합니다.




// 103 page 그림 참고 하세요.
class Person
{
	char* name;
	int age;
public:
	Person(const char* s, int a) : age(a)
	{
		name = new char[strlen(s) + 1];
		strcpy_s(name, strlen(s) + 1, s); 
	}
	~Person() { delete[] name; }

	// 사용자가 만드는 복사 생성자
	// 아래 코드가 "깊은 복사(Deep Copy)"로 구현한 코드 입니다.
	Person(const Person& p) : age(p.age)
	{
		// 1. 포인터가 아닌 멤버는 그냥 복사
//		age = p.age; // 이렇게 하지말고 초기화리스트로!

		// 2. 포인터 멤버는 주소를 복사하지 말고
		//    메모리 자체를 복사
		name = new char[strlen(p.name) + 1];

		strcpy_s(name, strlen(p.name) + 1, p.name);
	}
};

int main()
{
	Person p1("kim", 2);

	Person p2 = p1; // 복사 생성자 호출
					// 사용자가 만들지 않으면 컴파일러가 제공
}

