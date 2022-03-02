// 7_파일분할 - vector 7번 복사해오세요

// 클래스를 만드는 2가지 방법
// 1. 클래스 선언안에 멤버함수를 모두 구현..
// 2. 클래스를 선언과 구현 파일로 분리

#include <iostream>

#include "Vector.h"


int main()
{
	Vector v(5);

	v.setAt(0, 10); // v[0] = 10 의 의미
	v.setAt(1, 15); // v[1] = 15

	v.resize(10);

	std::cout << v.getAt(1) << std::endl; // 15
}