// 8_멤버초기화리스트2 - 87page 에 있습니다.

class Object
{
	int a;
	const int c;  // 상수..- 반드시 초기화 리스트에서 초기화 해야 합니다.
public:
	Object(int n1, int n2) : a(n1), c(n2) // ok.. 
	{
//		a = n1;
//		c = n2;  // error. 상수는 대입될수 없습니다.
	}
};
int main()
{
	Object obj(1, 2);
}