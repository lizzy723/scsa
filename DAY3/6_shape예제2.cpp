// 6_shape����1 - 152 page
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
//			Rect rc; // �̷��� ����� {} ����� �ٷ� �ı� �˴ϴ�. ��� ����Ҽ� �����ϴ�.
			Rect* temp = new Rect; // temp ��ü�� �������� �̹Ƿ� {} ������ı�
			
			v.push_back(temp); // �׷��� Rect ��ü �ּҸ� vector�� ����
								// v �� main �Լ� 1��° �ٿ��� ��������Ƿ� main �Լ�
								// ����� ���� �޸𸮿� ����!
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