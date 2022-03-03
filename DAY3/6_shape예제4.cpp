#include <iostream>
#include <vector>

// �ٽ� 3. ��� ������ ������ Ư¡�� �ִٸ� �ݵ�� Shape���� �־�� �Ѵ�.
//         �׷��� Shape* �� ��� ���� �ش� Ư¡�� ����Ҽ� �ִ�. ==> �ʹ� �߿��մϴ�!

// �ٽ� 4. ��� Ŭ���� ��� �Լ��� �Ļ� Ŭ������ override �ϰԵǴ� ����
//		   �ݵ�� �����Լ��� �ؾ� �Ѵ�.
//		   ó�� "Shape" ���鶧 ���� ����ǿ��� �մϴ�.!!!

class Shape
{
	int color;
public:
	// �Ʒ� �Լ��� "virtual" �� �ұ�� ����� ?
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
