// 4_접근지정자1 - 74page
#include <iostream>
#include <string>

// 3. 타입을 만들때 "잘못 사용하기 어렵게, 제대로 사용하기 쉽게" 만들어라.
//    안전한 타입을 만들자!

// 캡슐화 (encapsulation)
// 데이타를 private 에 감추어서 외부에 잘못된 사용을 막는다.
// 잘 정의된 public 멤버 함수를 사용해서만 객체의 상태를 변경할수 있다.

// "정보 은닉(information hiding)"
// => 사용자는 멤버 데이타를 알필요는 없다!..
// => 멤버 함수만 알면된다.


// 프로그램을 만들다 보니 "사람"을 관리할 필요가 있게 되었습니다.
struct Person
{
private:				// private 접근 지정자
	std::string name;	// 이 아래 부분에 있는 모든 멤버는 멤버 함수만 접근가능하다
	int  age;			// 멤버가 아닌 함수에서 접근시 에러.!

public:
	void setAge(int value)
	{
		// 인자 값의 유효성을 확인후에 객체의 상태를 변경한다.
		// 항상 객체가 안전한 상태를 유지할수 있도록 한다.
		if ( value >= 0 && value < 150)
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
