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
		ostream& operator<<(ostream& (*f)(ostream&))
		{
			f(*this); 
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

std::ostream& twoendl(std::ostream& os)
{
	os << "\n" << "\n";
	return os;
}
std::ostream& menu(std::ostream& os)
{
	os << "1. 김밥\n";
	os << "2. 라면\n";
	return os;
}
int main()
{
	std::cout << std::endl; // 개행
	std::cout << twoendl; // 2번 개행.. 표준에 없는데.. 만들어 봅시다.!
						// cout.operator<<(twoendl)
						// cout.operator<<(함수주소전달)
	std::cout << menu; // cout.operator<<(menu)
}
