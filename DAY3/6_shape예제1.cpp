// 6_shape����1 - 152 page
#include <iostream>
#include <vector>

// �Ŀ� ����Ʈ ���� ���α׷��� ������ ���ô�.

// �ٽ� 1. ��� ������ Ÿ������ �����ϸ� ���ϴ�.
// �ٽ� 2. ��� ������ ������ ��� Ŭ������ �ִٸ� ��� ������ ��� �����Ҽ� �ִ�.

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