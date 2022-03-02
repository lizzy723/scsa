// 12_static_quiz - 시험에 나오는 내용입니다. 잘 생각해 보세요
class Object
{
	int idata;
	static int sdata;
public:
	// 다음중 에러를 모두 고르세요
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