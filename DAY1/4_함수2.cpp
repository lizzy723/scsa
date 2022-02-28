// 30 page 함수 오버로딩

// C 언어 : 동일이름의 함수는 여러개 만들수 없다.
// C++언어 : 인자의 타입이나 갯수가 다르면(호출시 구별 가능하면)
//          동일이름의 함수는 여러개 만들수 있다.

int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
int main()
{
	square(3);
	square(3.4);
}

// 주의! 호출시 구별가능해야 합니다.
char f1(int) {}
long f1(int) {}
f1(3); // error. 구별 안됨.

void f2(int) {}
void f2(int, int b = 0) {}
f2(3); // error. 구별안됨

