#include <iostream>

class Counter
{
	int cnt = 0;
public:
//	Counter  increment() // 절대 값 반환 하면 안됩니다.!! 복사본 객체 계속 생성됩니다.
	Counter& increment() // 이렇게 해야 합니다.
	{
		++cnt;
		return *this;
	}
	int getCount() const { return cnt; }

	~Counter() { std::cout << "~Counter" << std::endl; }
};

int main()
{
	Counter c;
//	c.increment();
//	c.increment();
//	c.increment();
	std::cout << "---------" << std::endl;
	c.increment().increment().increment();
	std::cout << "---------" << std::endl;

	std::cout << c.getCount() << std::endl; // ???
}
