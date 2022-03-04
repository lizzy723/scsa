// 5_STL_CONTAINER2
#include <iostream>

// 선형 컨테이너
#include <vector>
#include <list>
#include <deque>

#include <set>
#include <unordered_set>

int main()
{
	// STL 의 set은 "tree" 라는 자료구조 입니다.
	// 특징 : 1. 검색이 빠릅니다. (이진 검색, up-down  게임처럼 검색)
	//        2. 왼쪽 마지막 자식 부터 오른쪽으로 이동하면 정렬을 유지 합니다.)
	std::set<int> s = { 50, 30, 70, 40, 80, 60, 25 };

	s.insert(35); // root 부터 비교해서 크기비교후 저장합니다.

	// unordered_set : hash table 이라는 자료 구조로 되어 있습니다.
	// 특징 1. 검색이 가장 빠른 자료구조. 잘 배치 되면 tree 보다 빠르다.
	//     2. 정렬상태는 유지 되지 않는다.
	std::unordered_set<int> s = { 50, 30, 70, 40, 80, 60, 25 };

	
	// 왜 이름이 tree, hash 가 아니고 , set 입니까 ?
	// 집합 관련 연산을 제공하는 컨테이너들 입니다.
	std::set<int> s1 = { 1,2,3 };
	std::set<int> s2 = { 2,3,4 };

	std::set<int> s3 = s1 | s2; // 교집합... {1,2,3,4}
	std::set<int> s4 = s2 - s1; // 차집합... {1}

	// 집합 기능을 구현하려면 검색 속도가 빨라야 합니다.
	// set           : 정렬을 유지 하면서 집합 관련 연산 제공. tree 사용
	// unordered_set : 정렬없이 집합 관련 연산 제공. hash 사용

}
