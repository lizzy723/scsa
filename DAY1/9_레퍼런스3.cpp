struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

void foo(? rc)
{
}

int main()
{
	Rect rc = { 1, 1, 10, 10 };

	foo(rc); // foo�� ���� rc�� ���� �����ϸ� �ȵ˴ϴ�.!!

	// foo ȣ��ڿ��� rc �� 1, 1, 10, 10 �� ���� �ؾ� �մϴ�.
}