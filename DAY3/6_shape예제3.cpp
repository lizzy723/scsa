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
			for (auto p : v) // p 는 Shape* 입니다.
				p->draw();	 // 그런데, Shape에는 draw()가 없습니다.
							// 해결책 1. p 를 Rect* 또는 Circle* 로 캐스팅하자.
							//			==> 그런데, Rect 인지 Circle이지 알수 없다.
							//       2. Shape에 draw를 넣자! ==> 답
		}
	}
}
// 위 코드는 왜 에러일까요 ?
// 해결책은 뭘까요 ?