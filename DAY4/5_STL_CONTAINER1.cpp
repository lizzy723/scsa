// 5_STL_CONTAINER1 - 214 page
#include <iostream>

// ���� �����̳�
#include <vector>
#include <list>
#include <deque>

int main()
{
	// �迭 : ���ӵ� �޸�, ũ�� ���� �ȵ�
	int x[5] = { 1,2,3,4,5 };

	// vector : ���ӵ� �޸�, ũ�� ���� ����.
	//          ��� ��ȸ�� ��������, �߰��� ����/������ ������.
	std::vector<int> c1 = { 1,2,3,4,5 };

	
	// list : ��� ��Ұ� ������ �޸�
	//        ��� ��ȸ�� vector���� ������. �߰� ����/������ ������.
	std::list<int>   c2 = { 1,2,3,4,5 };


	// vector �� list �� ȥ����..
	std::deque<int>  c3 = { 1,2,3,4,5 };
}





