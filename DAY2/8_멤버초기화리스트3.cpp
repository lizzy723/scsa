// 5_생성자3 - 78page ~
#include <iostream>

class Point
{
	int x;
	int y;
public:
//	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; } // 1
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; } // 2
};

class Rect
{
	Point leftTop;
	Point rightBottom;
public:
	// 사용자가 만든 코드		// 컴파일러가 변경한 코드
//	Rect()					// Rect() : leftTop(), rightBottom() 
//	{
//		std::cout << "Rect()" << std::endl;
//	}
	// 디폴트 생성자가 없는 멤버 데이타가 있다면(Point처럼) 반드시 아래처럼
	// 초기화 리스트에서 다른 생성자를 호출할수 있게 해야 합니다.
	Rect() : leftTop(0, 0), rightBottom(10, 10)
	{
		std::cout << "Rect()" << std::endl;
	}

};

int main()
{
	Rect rc;  // call Rect::Rect() 의 기계어 코드 생성됩니다.
}
