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

	// 핵심 1. 선형 컨테이너 3개의 경우 사용법이 거의 동일 합니다.
	c.push_back(10);  // 뒤에 넣기
	int n = c.front();// 앞에 요소 얻기.
	c.resize(10); // 크기 변경

	// 2. 사용법이 다른경우.. 해당 기능이 필요하면 다른 컨테이너를 사용하라는의도
	c.push_front(20); // 앞쪽에 넣기. 
					  // vector 는 앞쪽에 삽입/삭제 안됩니다.
					  // 앞쪽에 넣으려면 다른 list 나 deque 사용하세요.

	// 3. [] 연산은 vector 와 deque만 됩니다.
	//    => 연속된 메모리와 유사한 경우만 가능.
	c[0] = 10; // list 안됩니다.

	// 앞에 넣고 싶은데 [] 도 사용하고 싶다. : deque, ("덱" 또는 "디큐"라고 발음)
	// 앞에 넣을 필요없고 [] 가 필요  : vector
	// 삽입삭제가 자주 발생한다  : list

	// 선형 3개는 사용법이 동일.
	// set, unorded_set 은 선형 3개와는 다릅니다
	// set, unorded_set 2개는 서로 사용법 동일

	std::set<int> s = { 30, 20 };
//	s.push_back(10); // error. 자료구조 특성을 생각하세요

	s.insert(10); // set 은 이렇게만 가능합니다.
					// set : root 부터 비교해서 넣기
					// unordered_set : hash 함수에 보내서, 보관할 바구니 번호를 얻은후 보관
}
