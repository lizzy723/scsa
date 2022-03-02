// 1_new - 52 page  => github.com/codenuri/scsa
#include <iostream>
#include <cstdlib>

int main()
{
	// C 언어의 동적 메모리 할당
	int* p1 = (int*)malloc(40); // sizeof(int)*10
	free(p1);

	// C++ 언어의 동적 메모리 할당
	int* p2 = new int;
	delete p2;

	int* p3 = new int[10]; // 40 byte 할당
	delete[] p3;  // 주의 배열 할당은 "delete" 가 아닌 "delete[]"
}
// malloc vs free => 52 page
//				malloc				new
// 정체			함수					연산자(키워드)
// 인자			크기					타입
// 반환타입		void*				인자로 전달된 타입의 포인터
//				캐스팅해서 사용		캐스팅 필요 없음
// 메모리해지	free				delete, delete[]
// 결정적차이	생성자 호출안됨		생성자 호출됨.