// 5_STL_CONTAINER2
#include <iostream>

// ���� �����̳�
#include <vector>
#include <list>
#include <deque>

#include <set>
#include <unordered_set>

int main()
{
	// STL �� set�� "tree" ��� �ڷᱸ�� �Դϴ�.
	// Ư¡ : 1. �˻��� �����ϴ�. (���� �˻�, up-down  ����ó�� �˻�)
	//        2. ���� ������ �ڽ� ���� ���������� �̵��ϸ� ������ ���� �մϴ�.)
	std::set<int> s = { 50, 30, 70, 40, 80, 60, 25 };

	s.insert(35); // root ���� ���ؼ� ũ����� �����մϴ�.

	// unordered_set : hash table �̶�� �ڷ� ������ �Ǿ� �ֽ��ϴ�.
	// Ư¡ 1. �˻��� ���� ���� �ڷᱸ��. �� ��ġ �Ǹ� tree ���� ������.
	//     2. ���Ļ��´� ���� ���� �ʴ´�.
	std::unordered_set<int> s = { 50, 30, 70, 40, 80, 60, 25 };

	
	// �� �̸��� tree, hash �� �ƴϰ� , set �Դϱ� ?
	// ���� ���� ������ �����ϴ� �����̳ʵ� �Դϴ�.
	std::set<int> s1 = { 1,2,3 };
	std::set<int> s2 = { 2,3,4 };

	std::set<int> s3 = s1 | s2; // ������... {1,2,3,4}
	std::set<int> s4 = s2 - s1; // ������... {1}

	// ���� ����� �����Ϸ��� �˻� �ӵ��� ����� �մϴ�.
	// set           : ������ ���� �ϸ鼭 ���� ���� ���� ����. tree ���
	// unordered_set : ���ľ��� ���� ���� ���� ����. hash ���

}
