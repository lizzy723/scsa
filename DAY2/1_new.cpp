// 1_new - 52 page
#include <iostream>
#include <cstdlib>

int main()
{
	// C ����� ���� �޸� �Ҵ�
	int* p1 = (int*)malloc(40);
	free(p1);

	// C++ ����� ���� �޸� �Ҵ�
	int* p2 = new int;
	delete p2;

	int* p3 = new int[10];
	delete[] p3;  // ���� �迭 �Ҵ��� "delete" �� �ƴ� "delete[]"
}