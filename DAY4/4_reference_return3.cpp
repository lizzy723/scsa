#include <iostream>

class Counter
{
	int cnt = 0;
public:
//	Counter  increment() // ���� �� ��ȯ �ϸ� �ȵ˴ϴ�.!! ���纻 ��ü ��� �����˴ϴ�.
	Counter& increment() // �̷��� �ؾ� �մϴ�.
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
