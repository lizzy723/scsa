// 4_�Լ�6 - 37page. ���� ��ȯ Ÿ��

// C/C++�� �������� �Լ� ���
int square(int a)
{
	return a * a;
}
// C++11 ���� ���γ��� �Լ� ���
// ���� ��ȯ Ÿ��(suffix return type) �̶�� ����
auto square2(int a) -> int
{
	return a * a;
}

int main()
{
	square(3);
}