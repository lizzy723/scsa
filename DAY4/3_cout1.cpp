// 3_cout1
//#include <iostream>
#include <cstdio>

// cout의 원리
namespace std
{
	class ostream
	{
	public:
		void operator<<(int n)         { printf("%d", n); }
		void operator<<(double d)      { printf("%f", d); }
		void operator<<(const char* s) { printf("%s", s); }

		// 그외에 모든 기본 타입에 대해서 "operator<<" 함수를 제공
	};
	ostream cout; // 결국 cout은 전역변수(객체) 입니다.
}
int main()
{
	int n = 3;
	double d = 3.4;

	std::cout << n; // cout.operator<<(int) 를 호출
	std::cout << d; // cout.operator<<(double) 를 호출.
}