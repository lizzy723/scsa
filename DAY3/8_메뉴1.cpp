// 8_메뉴1
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// 메뉴를 만들어 봅시다.
// 1. C언어 버전

// "프로그램 이란 ?"
// => main 함수의 1번째 줄 부터 순차적으로 실행되는 실행흐름이다.

// => 실행흐름을 변경하려면 "조건문"을 사용한다.

// => 실행을 반복하려면 "반복문" 을 사용한다.

// => 기능별로 분리하려면 "함수"를 사용한다.

int main()
{
	printf("1. 김밥\n");
	printf("2. 라면\n");
	printf("메뉴를 선택하세요 >> ");

	int cmd;
	scanf_s("%d", &cmd);

	switch (cmd)
	{
	case 1: break;
	case 2: break;
	}
}