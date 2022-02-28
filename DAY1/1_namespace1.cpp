// 1_namespace1.cpp   -  7page
#include <stdio.h>

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