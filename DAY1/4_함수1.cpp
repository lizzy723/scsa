// 4_�Լ�1 - 28 page
// 1. ����Ʈ �Ķ����

// ���� ���� 1. �Լ��� ����� �������� �и��� "����ο��� ǥ��" �ؾ� �Ѵ�.
//          2. ������ ���� ���� ���ʴ�� �� �����Ҽ� �ִ�.

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