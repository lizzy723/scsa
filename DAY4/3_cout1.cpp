// 3_cout1
//#include <iostream>
#include <cstdio>

// cout�� ����
namespace std
{
	class ostream
	{
	public:
		void operator<<(int n)         { printf("%d", n); }
		void operator<<(double d)      { printf("%f", d); }
		void operator<<(const char* s) { printf("%s", s); }

		// �׿ܿ� ��� �⺻ Ÿ�Կ� ���ؼ� "operator<<" �Լ��� ����
	};
	ostream cout; // �ᱹ cout�� ��������(��ü) �Դϴ�.
}
int main()
{
	int n = 3;
	double d = 3.4;

	std::cout << n; // cout.operator<<(int) �� ȣ��
	std::cout << d; // cout.operator<<(double) �� ȣ��.
}