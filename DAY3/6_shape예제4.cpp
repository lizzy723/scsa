#include <iostream>
#include <vector>

// 핵심 3. 모든 도형의 공통의 특징이 있다면 반드시 Shape에도 있어야 한다.
//         그래야 Shape* 로 묶어서 사용시 해당 특징을 사용할수 있다. ==> 너무 중요합니다!

// 핵심 4. 기반 클래스 멤버 함수중 파생 클래스가 override 하게되는 것은
//		   반드시 가상함수로 해야 한다.
//		   처음 "Shape" 만들때 부터 설계되여야 합니다.!!!

class Shape
{
	int color;
public:
	// 아래 함수는 "virtual" 로 할까요 말까요 ?
	void setColor(int c) { color = c; }

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
