// 7_STL_ALGORITHM1
#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <algorithm> 
// ���� �Լ� : ���ڰ� �Ѱ��� �Լ�
// ���� �Լ� : ���ڰ� 2���� �Լ�

// ������ : ��ȯ ���� bool �� �Լ��μ� STL �� xxx_if( ) �� �����ϴ� �Լ�

// �Ʒ� ���� �Լ��� "���� ������(unary predicator)" ��� �θ��ϴ�.
bool fn(int a)
{
	return a % 3 == 0;
}


int main()
{
	std::vector<int> v = { 1,2, 6,4, 5,8, 9,3 };

	// �־��� �������� 3�� ã�� �ʹ�!!
	auto ret1 = std::find(v.begin(), v.end(), 3);  // "�� �˻�"


	// �־��� �������� ó�� ������ 3�� ����� ã�� �ʹ�.!

//	auto ret2 = std::find_if(v.begin(), v.end(), �Լ� );
	auto ret2 = std::find_if(v.begin(), v.end(), fn );


	// std::find    : ��   �˻�
	// std::find_if : ���� �˻�
}