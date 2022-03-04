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

		ostream& operator<<(ostream& (*f)(ostream&) )
		{ 
			// ���� f�� endl�� �ּ� �Դϴ�.
			f(*this); // �ᱹ endl(cout) �Դϴ�.
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
	// std::endl �� ��ü�� �Լ� �Դϴ�.!!!  (std::endl ==> "\n")
//	std::cout << std::endl; // �� �ڵ�� 
//	std::endl(std::cout); // �� �ڵ�� �����մϴ�!
	std::cout << std::endl; // cout.operator<<(endl)
							// cout.operator<<(�Լ�������)
}
