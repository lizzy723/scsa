// 3_상속과접근지정자 - 134 page
class Base
{
private: 
	int a;

public:
	int c;
};

class Derived : public Base
{
public:
};

int main()
{
	Base base;
	base.a = 10;
	base.c = 10;
}