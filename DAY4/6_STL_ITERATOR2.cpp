// 6_STL_ITERATOR1
#include <iostream>
#include <list>
#include <deque>
#include <vector>

int main()
{
//	std::list<int> c = { 1,2,3,4,5 };
//	std::vector<int> c = { 1,2,3,4,5 };

	int c[5] = { 1,2,3,4,5 };

	// 1. iterator �� ��Ȯ�� Ÿ��
	// �׷���. �Ʒ� ó�� ���� ����ϸ�
	// a. ������ ���̰�
	// b. �����̳� ����� �ڵ� ������ �ʿ��ϴ�.
//	std::list<int>::iterator p1 = c.begin();

	// 2. C++11 ���Ķ�� auto ����ϼ���
//	auto p1 = c.begin(); // c �� STL �����̳ʸ� ���� ������
						// raw array ��� ���� �Դϴ�.

	// 3. ���� ���� �ڵ�� �Ʒ� �Դϴ�
	auto p2 = std::begin(c); // ��� �Լ� begin ����.
							 // �Ϲ� �Լ� begin �� ����.!!!
							 // c�� raw array �̶� ok..
}






/*
namespace std
{
	template<typename T>
	class list
	{
	public:
		class iterator
		{
		public:
			operator++() {}
			operator*() {}
		};
	};
}
*/