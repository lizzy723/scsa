// 6_shape예제1 - 152 page
#include <iostream>
#include <vector>

class Shape
{
};

class Rect : public Shape
{
public:
	void draw() { std::cout << "draw rect" << std::endl; }
};

class Circle : public Shape
{
public:
	void draw() { std::cout << "draw circle" << std::endl; }
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
			// 지금 까지 만든 모든 도형을 그려줍니다.
			for (auto p : v)
				p->draw();
		}
	}
}
// 위 코드는 왜 에러일까요 ?
// 해결책은 뭘까요 ?