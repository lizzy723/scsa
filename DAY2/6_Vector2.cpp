#include <iostream>

int main()
{
	int cnt = 0;
	std::cout << "학생수는 >> ";
	std::cin >> cnt;

	// 3. 입력된 학생수 만큼 다시 점수를 입력 받아야 합니다.
//	int score[cnt]; // error. 배열의 크기로 변수 안됨.  

	// 실행시간에 결정된 크기 만큼의 메모리 필요 - "동적메모리할당"으로해야 한다
	// 원할때, 원하는 크기만큼 할당 가능한 "자유로운 메모리 공간" => "heap"

	// 동적 할당된 메모리는 "이름"이 없다. 
	// "주소를 보관했다가 접근해야 한다."
	int* score = new int[cnt]; // ok. 변수 사용가능. 
								// malloc(sizeof(int)*cnt)

	// 포인터는 배열처럼 사용가능하므로
	score[0] = 10;

	// 사용후에는 반드시 제거
	delete[] score;

}