#include <iostream>
#include <vector>

class Shape
{
protected:
	int color;
public:
	virtual ~Shape() {}  // ��� ��� Ŭ������ �Ҹ��ڴ� �����Լ� �̾�� �Ѵ�.


	void setColor(int c) { color = c; }

	// �����Լ�     : �Ļ� Ŭ������ ������ ������ �⺻ ���� ���� �ϰڴٴ� �ǹ�
	// ���� �����Լ� : �Ļ� Ŭ�������� �ݵ�� ������ �����϶�� �����ϴ� �� 

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
