#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v; // �ʱ� ũ�Ⱑ 0�� ���� �迭

	int n = 0;
	while (1)
	{
		std::cin >> n;

		if (n == -1) break;

		v.push_back(n); // �ڵ����� ũ�� ���� �մϴ�.
	}
	std::cout << "�Էµ� ���� : " << v.size() << std::endl;

	// range-for �� STL �����̳� ������ �ֽ��ϴ�.
	for (auto e : v)
		std::cout << e << ", ";

	// vector v �ı��� �Ҹ��ڿ��� ���� �Ҵ�� �޸� �ı��� �ݴϴ�.
}




