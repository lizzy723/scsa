#include <iostream>
#include <vector>

class Shape
{
protected:
	int color;
public:
	virtual ~Shape() {}  // 모든 기반 클래스의 소멸자는 가상함수 이어야 한다.


	void setColor(int c) { color = c; }

	// 가상함수     : 파생 클래스가 만들지 않으면 기본 구현 제공 하겠다는 의미
	// 순수 가상함수 : 파생 클래스에게 반드시 구현을 제공하라고 지시하는 것 

	virtual void draw() { std::cout << "draw shape" << std::endl; }
};







class Rect : public Shape
{
public:
	virtual void draw() { std::cout << "draw rect" << std::endl; }
};

class Circle : public Shape
{
public:
	virtual void draw() { std::cout << "draw circle" << std::endl; }
};

class Triangle : public Shape
{
public:
	virtual void draw() { std::cout << "draw Triangle" << std::endl; }
};

int main()
{
	std::vector<Shape*> v;

	while (1)
	{
		int cmd;
		std::cin >> cmd;

		if (cmd == 1)
			v.push_back(new Rect);

		else if (cmd == 2)
			v.push_back(new Circle);

		else if (cmd == 9)
		{
			for (auto p : v)
				p->draw(); 
		}
	}
}
