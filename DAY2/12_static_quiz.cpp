// 12_static_quiz - ���迡 ������ �����Դϴ�. �� ������ ������
class Object
{
	int idata;
	static int sdata;
public:
	// ������ ������ ��� ������
	void f1()
	{
		idata = 0;	// 1
		sdata = 0;	// 2
		f2();		// 3
	}
	void f2()
	{
		idata = 0;	// 4
		sdata = 0;  // 5
		f1();		// 6
	}
};
int Object::sdata = 0;
int main()
{
}