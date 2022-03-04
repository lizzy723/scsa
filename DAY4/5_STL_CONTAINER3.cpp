#include <iostream>

#include <vector>
#include <list>
#include <deque>
#include <set>
#include <unordered_set>

int main()
{
//	std::vector<int> c = { 1,2,3,4,5 };
//	std::list<int>   c = { 1,2,3,4,5 };
	std::deque<int>  c = { 1,2,3,4,5 };

	// �ٽ� 1. ���� �����̳� 3���� ��� ������ ���� ���� �մϴ�.
	c.push_back(10);  // �ڿ� �ֱ�
	int n = c.front();// �տ� ��� ���.
	c.resize(10); // ũ�� ����

	// 2. ������ �ٸ����.. �ش� ����� �ʿ��ϸ� �ٸ� �����̳ʸ� ����϶���ǵ�
	c.push_front(20); // ���ʿ� �ֱ�. 
					  // vector �� ���ʿ� ����/���� �ȵ˴ϴ�.
					  // ���ʿ� �������� �ٸ� list �� deque ����ϼ���.

	// 3. [] ������ vector �� deque�� �˴ϴ�.
	//    => ���ӵ� �޸𸮿� ������ ��츸 ����.
	c[0] = 10; // list �ȵ˴ϴ�.

	// �տ� �ְ� ������ [] �� ����ϰ� �ʹ�. : deque, ("��" �Ǵ� "��ť"��� ����)
	// �տ� ���� �ʿ���� [] �� �ʿ�  : vector
	// ���Ի����� ���� �߻��Ѵ�  : list

	// ���� 3���� ������ ����.
	// set, unorded_set �� ���� 3���ʹ� �ٸ��ϴ�
	// set, unorded_set 2���� ���� ���� ����

	std::set<int> s = { 30, 20 };
//	s.push_back(10); // error. �ڷᱸ�� Ư���� �����ϼ���

	s.insert(10); // set �� �̷��Ը� �����մϴ�.
					// set : root ���� ���ؼ� �ֱ�
					// unordered_set : hash �Լ��� ������, ������ �ٱ��� ��ȣ�� ������ ����
}
