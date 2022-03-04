// 3_cout1
//#include <iostream>
#include <cstdio>

// cout�� ����
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
	os << "1. ���\n";
	os << "2. ���\n";
	return os;
}
int main()
{
	std::cout << std::endl; // ����
	std::cout << twoendl; // 2�� ����.. ǥ�ؿ� ���µ�.. ����� ���ô�.!
						// cout.operator<<(twoendl)
						// cout.operator<<(�Լ��ּ�����)
	std::cout << menu; // cout.operator<<(menu)
}
