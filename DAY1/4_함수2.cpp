// 30 page �Լ� �����ε�

// C ��� : �����̸��� �Լ��� ������ ����� ����.
// C++��� : ������ Ÿ���̳� ������ �ٸ���(ȣ��� ���� �����ϸ�)
//          �����̸��� �Լ��� ������ ����� �ִ�.

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

// ����! ȣ��� ���������ؾ� �մϴ�.
char f1(int) {}
long f1(int) {}
f1(3); // error. ���� �ȵ�.

void f2(int) {}
void f2(int, int b = 0) {}
f2(3); // error. �����ȵ�

