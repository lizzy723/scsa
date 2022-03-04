// 3_cout1
//#include <iostream>
#include <cstdio>

// cout의 원리
namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(int n) { printf("%d", n); return *this; }
		ostream& operator<<(double d) { printf("%f", d); return *this; }
		ostream& operator<<(const char* s) { printf("%s", s); return *this; }

		ostream& operator<<(ostream& (*f)(ostream&) )
		{ 
			// 이제 f는 endl의 주소 입니다.
			f(*this); // 결국 endl(cout) 입니다.
			return *this; 
		}
	};
	ostream cout;

	ostream& endl(ostream& os)
	{
		os << "\n";
		return os;
	}
}
int main()
{
	// std::endl 의 정체는 함수 입니다.!!!  (std::endl ==> "\n")
//	std::cout << std::endl; // 이 코드는 
//	std::endl(std::cout); // 이 코드와 동일합니다!
	std::cout << std::endl; // cout.operator<<(endl)
							// cout.operator<<(함수포인터)
}
