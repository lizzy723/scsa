// 2_ǥ�������1 - 12 page
//#define _CRT_SECURE_NO_WARNINGS     // scanf ����ص� �������� ����� ��

#include <cstdio>   // printf ���� C���  ǥ�������
#include <iostream> // C++ ǥ�������

int main()
{
	int n = 10;

	// C��� ��Ÿ��
	//scanf("%d", &n); // �ٽ�, �ּ� ����(&n)
	scanf_s("%d", &n); // ���� ��ȭ ����.. C ǥ�� �Դϴ�.
					   // �̷��� ��ﶧ(����Ҷ�) C ǥ������, 
						// �ƴϸ� �ش� �����Ϸ��� �����ϴ��� �� Ȯ���Ļ���ϼ���
	printf("%d", n); // "���� ���þ�, %d" �ʿ�


}