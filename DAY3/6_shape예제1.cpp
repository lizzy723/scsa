// 6_shape예제1 - 152 page
#include <iostream>
#include <vector>

// 파워 포인트 같은 프로그램을 생각해 봅시다.

// 핵심 1. 모든 도형을 타입으로 설계하면 편리하다.
// 핵심 2. 모든 도형의 공통의 기반 클래스가 있다면 모든 도형을 묶어서 관리할수 있다.

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
}