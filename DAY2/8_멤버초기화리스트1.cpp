// 8_멤버초기화리스트1 - 85page
#include <iostream>
#include <string>

class Person
{
	std::string name;
	int  age;
public:
	// member initializer list : 생성자뒤에 : 을 적고 멤버를 초기화 하는 것
	Person(const std::string& n, int a) 
				: name(n), age(a)  // 좋은 코드.   "초기화" 입니다.
	{
	//	name = n; // 좋지 않은 코드!  ==> "대입" 입니다.
	//	age = a;
	}
};
int main()
{
	Person p("kim", 28);

	// 초기화 vs 대입
	// 1. 아래 처럼 primitive type 인 경우는 차이점 없습니다.
	int a = 28; // 초기화, 만들면서 넣는것
	int b;
	b = 28;     // 대입. 만든후에 넣는것

	// 2. user type
	std::string name1("kim"); // 인자가 한개인 생성자 1회 호출로 초기화됨.

	std::string name2;	// 1. 디폴트 생성자 호출(인자 없는 생성자)
	name2 = "kim";		// 2. 대입연산자(name2.operator=("kim")) 라는 함수호출
						// 즉, 2회의 함수 호출로 초기화 됨.

	// 또한, 초기화는 되지만 대입은 안되는 것도 있습니다
	const int c = 10; // ok. 초기화 가능
	c = 20; // error. 대입 안됨

}