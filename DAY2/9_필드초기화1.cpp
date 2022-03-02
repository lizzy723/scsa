// 9_필드초기화1.cpp
class Point
{
	// C++11 부터는 멤버 데이타를 아래처럼 직접 초기화 할수 있습니다.
	int x = 0;
	int y{ 0 }; // 이렇게해도 됩니다.
public:
	Point() {}
	Point(int a)        : x(a) {}
	Point(int a, int b) : x(a), y(b) {}
};
// 위코드를 컴파일러는 아래 코드로 변경합니다.
class Point
{
	int x;
	int y; 
public:
	Point()      : x(0), y(0) {}
	Point(int a) : x(a), y(0) {}
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
	Point pt(1,2);
}