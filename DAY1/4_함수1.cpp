// 4_함수1 - 28 page
// 1. 디폴트 파라미터

// 주의 사항 1. 함수를 선언과 구현으로 분리시 "선언부에만 표기" 해야 한다.
//          2. 마지막 인자 부터 차례대로 만 지정할수 있다.

void f1(int a,     int b = 0, int c)     {} // error
void f1(int a = 0, int b,     int c = 0) {} // error

void foo(int a, int b = 0, int c = 0);


int main()
{
	foo(1, 2, 3);
	foo(1, 2);		// foo(1, 2, 0)
	foo(1);			// foo(1, 0, 0)
}

void foo(int a, int b /*= 0*/, int c /*= 0*/)
{
}