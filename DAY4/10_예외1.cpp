// 10_예외1 - 231
#include <cstdlib>

// 함수는 실패 할수 있습니다.
// => 반드시 호출자에게 보고해야 합니다.
// => C 언어는 반환값으로 알려줍니다.
// => 그래서, C 표준 함수중 void를 반환하는 함수는 거의 없습니다.

// 단점
// 1. 반환 값과 실패의 전달이 모호하다.(섞여 있다.)
// 2. 호출자 입장에서는 실패를 무시할수 있다. ==> 심각한 버그 가능성.

//void ConnectServer(int ip)
int ConnectServer(int ip)
{
	if (실패)
		//	exit(-1); // 프로그램 종료하는 함수
		return -1;

	return 10;
}

int main()
{
	ConnectServer(123);
}