// 9_필드초기화2
#include <iostream>

int g = 10;

class Object
{
	int v1 = 0;		// 이런식으로 리터럴로만 초기화 하세요.
	int v2 = ++g;	// 핵심.. 절대 이런 표기법은 여기서 사용하지 마세요.. 혼란스러워 집니다.
public:
	// 사용자 코드							// 컴파일러가 변경한 코드
	Object() {}								// Object() : v1(0), v2(++g) {}	
	Object(int a, int b) : v1(a), v2(b) {}	// Object(int a, int b) : v1(a), v2(b) {}
};
int main()
{
	Object o1;
	Object o2(1, 2);

	std::cout << g << std::endl; // 얼마 나올지 예측해 보세요. - 11
								 // 1. 10   2. 11   3. 12
}
// v2만 인자로 가지는 생성자를 만들게 되면 v1은 필드초기화의 값을 따라가나요? => 맞습니다.