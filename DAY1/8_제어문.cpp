// 8_��� - 39 page
int foo()
{
	return 10;
}
int main()
{
	// �Ʒ� �ڵ�� C���� ���� �θ� ���Ǵ� �ڵ��Դϴ�.
	int ret1 = foo();
	if (ret1 == 10)
	{
	}
	// C++17 ���ʹ� �Ʒ�ó�� �ص� �˴ϴ�.
	if (int ret2 = foo(); ret2 == 10)
	{
	} // <== ret2�� ���⼭ �ı�

	switch (int n = foo(); n)
	{
	case 10: break;
	case 20: break;
	}
	// �Ʒ� �ڵ嵵 ���������  ?
	while (int cnt = 0; cnt < 10) // �����ϴ�. 
	{								// �� ������ ?  "for���� �����ϱ� ?"
		++cnt;
	}
}

