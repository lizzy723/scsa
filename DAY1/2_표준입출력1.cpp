// 2_표준입출력1 - 12 page
//#define _CRT_SECURE_NO_WARNINGS     // scanf 사용해도 에러내지 말라는 것

#include <cstdio>   // printf 등의 C언어  표준입출력
#include <iostream> // C++ 표준입출력

int main()
{
	int n = 10;

	// C언어 스타일
	//scanf("%d", &n); // 핵심, 주소 전달(&n)
	scanf_s("%d", &n); // 보안 강화 버전.. C 표준 입니다.
					   // 이런것 배울때(사용할때) C 표준인지, 
						// 아니면 해당 컴파일러만 지원하는지 꼭 확인후사용하세요
	printf("%d", n); // "포맷 지시어, %d" 필요

	
	// C++스타일 
	std::cin >> n; // &n 가 아니라 n 입니다.

	std::cout << "n = " << n << "\n";
	std::cout << "n = " << n << std::endl; // std::endl 이 개행 출력입니다.
			// 1. << 를 계속 사용가능
			// 2. "%d" 등의 포맷 지시어 필요 없음.

	// printf 는 "함수" 인데, std::cout 의 정체는 뭔가요 ?
	//                      ==> 객체라는 존재인데, 마지막날 직접 만들게 됩니다.
	//						==> 오늘은 그냥 사용법만 알아두세요.
}