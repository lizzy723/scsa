// 1_new - 52 page  => github.com/codenuri/scsa
#include <iostream>
#include <cstdlib>

int main()
{
	// C ����� ���� �޸� �Ҵ�
	int* p1 = (int*)malloc(40); // sizeof(int)*10
	free(p1);

	// C++ ����� ���� �޸� �Ҵ�
	int* p2 = new int;
	delete p2;

	int* p3 = new int[10]; // 40 byte �Ҵ�
	delete[] p3;  // ���� �迭 �Ҵ��� "delete" �� �ƴ� "delete[]"
}
// malloc vs free => 52 page
//				malloc				new
// ��ü			�Լ�					������(Ű����)
// ����			ũ��					Ÿ��
// ��ȯŸ��		void*				���ڷ� ���޵� Ÿ���� ������
//				ĳ�����ؼ� ���		ĳ���� �ʿ� ����
// �޸�����	free				delete, delete[]
// ����������	������ ȣ��ȵ�		������ ȣ���.