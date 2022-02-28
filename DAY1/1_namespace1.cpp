// 1_namespace1.cpp   -  7page
#include <stdio.h>
// 장점 : 1. 프로그램을 관련된 요소끼리 논리적으로 분리할수 있다.
//        2. 이름 충돌을 막을수 있다. 
//        C 언어를 제외한 대부분의 언어가 지원
namespace Audio
{
	void init()
	{
		printf("init audio\n");
	}
	// Audio 관련 모든 코드(함수, 구조체, 전역변수등)을 여기에 작성합니다
}
namespace Video
{
	void init()
	{
		printf("init video\n");
	}
}

int main()
{
	Audio::init(); // ??
}