// 8_메뉴1
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// 메뉴를 만들어 봅시다.
// 1. C언어 버전

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