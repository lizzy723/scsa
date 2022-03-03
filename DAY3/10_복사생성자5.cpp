#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5 };
	std::vector<int> v2 = v1; // 이 순간을 생각해보세요.
						// 우리가 어제 만들었던 Vector 생각해보세요
						// 이순간 vector의 복사 생성자가 호출되고..
						// 실제 vector의 복사 생성자는 "깊은 복사"로 구현되어 있습니다.
}
// 단순한 vector 사용자(초급시절) - 복사 생성자를 몰라도 잘 사용할수 있다.

// vector 와 유사한 클래스를 만들게 되는 시점(중급개발자)
// => 얕은복사의 문제를 알고, 해결할수 있어야(deep copy) 된다.