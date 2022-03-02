#include <iostream>

// 객체지향 : 필요한 타입을 먼저 설계 하자.!!

// "Rect", "Person" 등만 타입이 아닙니다.
// 다양한 추상적인 개념들도 타입화 하면 됩니다.

// "동적배열(Vector)" 타입을 만들어 봅시다.
class Vector
{
};

int main()
{
	Vector v(5); // 크기가 5인 동적 배열

	v.resize(10); // 크기를 10으로!
}