// 12_static_quiz - ���迡 ������ �����Դϴ�. �� ������ ������
class Object
{
	int idata;
	static int sdata;
public:
	// ������ ������ ��� ������
	// static ��� ����Ÿ : ��ü�� ��� �޸𸮿� �ְ�, ��� ��ü�� ����
	// static ��� �Լ�   : ��ü���� ȣ�Ⱑ��
	void f1()
	{
		idata = 0;	// 1. ok
		sdata = 0;	// 2. ok
		f2();		// 3. ok
	}
	// static ��� �Լ��� static ����� ���� �����մϴ�
	static void f2()
	{
		idata = 0;	// 4. error
		sdata = 0;  // 5. ok
		f1();		// 6. error
	}
};
int Object::sdata = 0;
int main()
{
	Object::f2();
}