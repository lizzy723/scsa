// 8_����ʱ�ȭ����Ʈ2 - 87page �� �ֽ��ϴ�.

class Object
{
	int a;
	const int c;  // ���..- �ݵ�� �ʱ�ȭ ����Ʈ���� �ʱ�ȭ �ؾ� �մϴ�.
public:
	Object(int n1, int n2) : a(n1), c(n2) // ok.. 
	{
//		a = n1;
//		c = n2;  // error. ����� ���Եɼ� �����ϴ�.
	}
};
int main()
{
	Object obj(1, 2);
}