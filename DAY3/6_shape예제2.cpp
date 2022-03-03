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
		{
//			Rect rc; // 이렇게 만들면 {} 벗어나면 바로 파괴 됩니다. 계속 사용할수 없습니다.
			Rect* temp = new Rect; // temp 자체는 지역변수 이므로 {} 벗어날때파괴
			
			v.push_back(temp); // 그래서 Rect 객체 주소를 vector에 보관
								// v 는 main 함수 1번째 줄에서 만들었으므로 main 함수
								// 종료시 까지 메모리에 존재!
		}
		else if (cmd == 2)
		{
			v.push_back(new Circle);
		}
		else if (cmd == 9)
		{

		}
	}
}