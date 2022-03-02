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

// C++을 배우는 것은 !!

// 1. vector 같은 타입을 만드는 문법을 배우는것 - 어렵습니다.!!(초~중급)

// 2. std::vector 같은 이미 만들어진 타입(클래스)의 사용법을 배우는 것 => 쉽습니다.

// C++ 표준 라이브러리 : std::vector, std::string, std::list 등....


