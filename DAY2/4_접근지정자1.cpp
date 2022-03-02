// 4_접근지정자1 - 74page
#include <iostream>
#include <string>

// 3. 타입을 만들때 "잘못 사용하기 어렵게, 제대로 사용하기 쉽게" 만들어라.
//    안전한 타입을 만들자!

// 프로그램을 만들다 보니 "사람"을 관리할 필요가 있게 되었습니다.
struct Person
{
private:				// private 접근 지정자
	std::string name;	// 이 아래 부분에 있는 모든 멤버는 멤버 함수만 접근가능하다
	int  age;			// 멤버가 아닌 함수에서 접근시 에러.!

public:
	void setAge(int value)
	{
		age = value;
	}
};

int main()
{
	Person p;

//	p.age = -10; // 사용자의 실수로 상태가 불안한 객체가 생성되었다.
				// error. private 에 있는 경우.
	p.setAge(-10);
				 
}
