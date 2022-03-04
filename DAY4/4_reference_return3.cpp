#include <iostream>

class Counter
{
	int cnt = 0;
public:
	void increment()
	{
		++cnt;
	}
	int getCount() const { return cnt; }
};

int main()
{
	Counter c;
	c.increment();
	c.increment();
	c.increment();
	std::cout << c.getCount() << std::endl;
}
