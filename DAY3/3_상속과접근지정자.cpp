// 3_��Ӱ����������� - 134 page
class Base
{
private: 	int a; // �ڽ��� ����Լ������� ���� ����
protected:	int b; // �ڽ��� ��� �Լ� + �Ļ� Ŭ������ ��� �Լ����� ���� ����
public:	    int c; // ��𼭳� ���� ����
};
class Derived : public Base
{
public:
	void fn()
	{
		a = 10; // error.. ���� �Ϸ��� ��� Ŭ������ �����ϴ� �Լ��� ���ؼ��� ����
				//			setA(10) ���� �Լ�
		b = 10; // ok
		c = 10; // ok
	}
};

int main()
{
	Base base;
	base.a = 10; // error
	base.b = 10; // error. protected�� �ܺο��� ���� �ȵ�.
	base.c = 10; // ok
}