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

	foo(rc); // foo는 절대 rc의 값을 수정하면 안됩니다.!!

	// foo 호출뒤에도 rc 는 1, 1, 10, 10 을 유지 해야 합니다.
}