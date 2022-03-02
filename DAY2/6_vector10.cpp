#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v; // 초기 크기가 0인 동적 배열

	int n = 0;
	while (1)
	{
		std::cin >> n;

		if (n == -1) break;

		v.push_back(n); // 자동으로 크기 증가 합니다.
	}
	std::cout << "입력된 갯수 : " << v.size() << std::endl;

	// range-for 에 STL 컨테이너 넣을수 있습니다.
	for (auto e : v)
		std::cout << e << ", ";

	// vector v 파괴시 소멸자에서 동적 할당된 메모리 파괴해 줍니다.
}




