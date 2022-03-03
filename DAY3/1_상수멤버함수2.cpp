// 1_상수멤버함수2

// 상수 멤버 함수는 선택이 아닌 "필수 문법" 입니다.
// 객체의 상태를 변경하지 않은 모든 멤버 함수(getter, getxxx() 모양의 함수)는
// 반드시 상수 멤버 함수로 설계 되어야 합니다.

// 어제 배운 today.afterDays(1000) 같은 멤버함수도 상수 멤버함수가 되어야 합니다.
class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d) : x(a), y(b), w(c), h(d) {}

	int getArea() const 
	{
		// 상수 멤버 함수 안에서는 멤버 데이타 변경안됩니다.
//		x = 0; // error
		return w * h; 
	}
	
	// 사각형 이동 - 상수 멤버함수로 하면 안됩니다. 
	void move(int dx, int dy)
	{
		x = dx;
		y = dy;
	}
};
//void fn(Rect rc)    // call by value 는 오버헤드가 있다.
void fn(const Rect& rc)
{
	rc.move(1, 2); // error
	int n = rc.getArea(); // ok 
}
int main()
{
	Rect r(1, 1, 10, 10);  // 상수객체 아님.
	int n = r.getArea();   // ok
	fn(r);
}