// 12_static_quiz - 시험에 나오는 내용입니다. 잘 생각해 보세요
class Object
{
	int idata;
	static int sdata;
public:
	// 다음중 에러를 모두 고르세요
	// static 멤버 데이타 : 객체가 없어도 메모리에 있고, 모든 객체가 공유
	// static 멤버 함수   : 객체없이 호출가능
	void f1()
	{
		idata = 0;	// 1. ok
		sdata = 0;	// 2. ok
		f2();		// 3. ok
	}
	// static 멤버 함수는 static 멤버만 접근 가능합니다
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