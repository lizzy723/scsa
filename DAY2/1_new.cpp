// 1_new - 52 page
#include <iostream>
#include <cstdlib>

int main()
{
	// C 언어의 동적 메모리 할당
	int* p1 = (int*)malloc(40);
	free(p1);

	// C++ 언어의 동적 메모리 할당
	int* p2 = new int;
	delete p2;

	int* p3 = new int[10];
	delete[] p3;  // 주의 배열 할당은 "delete" 가 아닌 "delete[]"
}