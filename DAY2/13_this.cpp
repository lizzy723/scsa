// 13_this - 126 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	void set(int a, int b)	// void set(Point* this, int a, int b)
	{						// {
		x = a;				//		this->x = a;
		y = b;				//		this->y = b;
		
		// 멤버 함수 안에서 this 는 현재 함수를 호출할때 사용한 객체의 주소 입니다.
		std::cout << this << std::endl;
	}	
};
int main()
{
	Point p1;
	Point p2;
	p1.set(10, 20); // 이 한줄의 원리를 생각해 봅시다(126 page)
	p2.set(10, 20); // set(&p2, 10, 20) 라고 변경됩니다.

	std::cout << "&p1 : " << &p1 << std::endl;
	std::cout << "&p2 : " << &p2 << std::endl;
}

