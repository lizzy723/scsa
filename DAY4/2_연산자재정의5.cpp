#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}

	// 아래처럼 만들면 Point 타입 객체의 주소를 구할수 없게 됩니다.
	// => 그런데, &연산자는 재정의하면 "득보다 실이" 많다고 알려져 있습니다
	// => 재정의 하지 마세요.. 
	Point* operator&() { return nullptr; }  
};

int main()
{
	Point p1(1, 1);
	
	std::cout << &p1 << std::endl; // &p1 : p1.operator&()
}

// C++ : 필요없어 보여도.. 모든것을 가능하게 해주면, 
//		 개발자들이 훌륭한 활용을 찾아 낼 것이다.

// 다른언어 : 정말 필요한것만 지원 하자.
//			 지원되지 않았던것중에 필요 하면, 새로운 버전에서 지원하면된다.
