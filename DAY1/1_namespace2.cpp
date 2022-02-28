#include <stdio.h>

namespace Audio
{
	void init() { printf("init audio\n"); }
}
namespace Video
{
	void init() { printf("init video\n"); }
}

int main()
{
	// namespace 에 접근 하는 3가지 방법 - 8 page
	// 1. 완전한 이름(qualified name) 사용
	Audio::init(); 

	// 2. using declaration(선언) 사용
	using Audio::init;	// init 은 Audio 이름 없이 사용가능
	init();				// 

	// 3. using directive(지시어) 사용
	using namespace Audio; // Audio 내의 모든 이름(함수, 구조체등)을 Audio 없이 접근
	init();
}
