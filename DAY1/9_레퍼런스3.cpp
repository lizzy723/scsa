struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};
//void foo(Rect rc) // call by value : ������ �������� ������ �̶�� ���
				  //				 ���纻 ������ ���� �޸� ������尡 �ִ�.

//void foo(Rect& rc) // call by reference(����) : ���纻�� ���� ������尡 ����.
				   //					������, �Ǽ��� ������ �����Ҽ� �ִ�.

void foo(const Rect& rc) // const reference : ���ڰ��� �������� ������ ����ϴ�
{							//				���� ���� ���.
//	rc = 10; // error
}
int main()
{
	Rect rc = { 1, 1, 10, 10 };

	foo(rc); // foo�� ���� rc�� ���� �����ϸ� �ȵ˴ϴ�.!!

	// foo ȣ��ڿ��� rc �� 1, 1, 10, 10 �� ���� �ؾ� �մϴ�.
}

// 45page