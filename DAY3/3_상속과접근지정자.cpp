// 3_상속과접근지정자 - 134 page
class Base
{
private: 	int a; // 자신의 멤버함수에서만 접근 가능
protected:	int b; // 자신의 멤버 함수 + 파생 클래스의 멤버 함수에서 접근 가능
public:	    int c; // 어디서나 접근 가능
};
class Derived : public Base
{
public:
	void fn()
	{
		a = 10; // error.. 접근 하려면 기반 클래스가 제공하는 함수를 통해서만 가능
				//			setA(10) 등의 함수
		b = 10; // ok
		c = 10; // ok
	}
};

int main()
{
	Base base;
	base.a = 10; // error
	base.b = 10; // error. protected는 외부에서 접근 안됨.
	base.c = 10; // ok
}