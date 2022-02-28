// 8_제어문 - 39 page
int foo()
{
	return 10;
}
int main()
{
	// 아래 코드는 C언어에서 아주 널리 사용되는 코드입니다.
	int ret1 = foo();
	if (ret1 == 10)
	{
	}
	// C++17 부터는 아래처럼 해도 됩니다.
	if (int ret2 = foo(); ret2 == 10)
	{
	} // <== ret2는 여기서 파괴

	switch (int n = foo(); n)
	{
	case 10: break;
	case 20: break;
	}
	// 아래 코드도 생겼을까요  ?
	while (int cnt = 0; cnt < 10) // 없습니다. 
	{								// 왜 없나요 ?  "for문이 있으니까 ?"
		++cnt;
	}
}

