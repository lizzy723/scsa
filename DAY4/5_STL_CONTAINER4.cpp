#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <unordered_set>
#include <string>

int main()
{
	std::vector<int> v1(5);
	v1[0] = 10;

	// �����̳ʸ� �����ϴ� �����̳ʰ� �Ǹ��մϴ�.
	std::vector<std::string> v2(5);
	v2[0] = "hello";

	std::cout << v2[0] << std::endl; // "hello"
	std::cout << v2[0][2] << std::endl; // 'l'
	//-------------------

	std::vector<std::list<int>> v3(5); // �� �ڷᱸ�� ��� ������ ������.

	v3[0].push_back(10);
	v3[0].push_back(20);
	v3[0].push_back(30);

	v3[1].push_back(1);
	v3[1].push_back(2);

	// C ���� �Ʒ� �ڷᱸ�� ����ٰ� �����غ�����..
	std::list < std::list<int> > s;
}



