// 10_복사생성자6

class Point
{
	int x, y;
public:
	Point() {}								  // 디폴트 생성자
	Point(const Point& p) : x(p.x), y(p.y) {} // 복사 생성자
};

int main()
{
	Point p1;     // 디폴트 생성자 호출
	Point p2(p1); // 복사 생성자 호출
}