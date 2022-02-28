#include <stdio.h>

namespace Audio
{
	void init() { printf("init audio\n"); }
}
namespace Video
{
	void init() { printf("init video\n"); }
}

// global namespace : 어떠한 이름공간에도 포함되지 않은것
void init() { printf("init global\n"); }

using Audio::init; // using 선언및 지시어는 함수 안또는 밖에 있을수 있습니다.

int main()
{
	// namespace 에 접근 하는 3가지 방법 - 8 page
	// 1. 완전한 이름(qualified name) 사용
	Audio::init(); 

	// 2. using declaration(선언) 사용
//	using Audio::init;	// init 은 Audio 이름 없이 사용가능
	init();				// 
	::init(); // global 호출.		::  => "scope resolution" 연산자

	// 3. using directive(지시어) 사용
	using namespace Audio; // Audio 내의 모든 이름(함수, 구조체등)을 Audio 없이 접근
	init();
}
