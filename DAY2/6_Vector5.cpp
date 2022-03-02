#include <iostream>

class Vector
{
	// 1. 멤버 데이타가 어떤 것이 필요할지 잘 생각하세요.
	int* ptr;
	int size;
public:
	Vector(int sz)
	{
		size = sz;
		ptr = new int[size];
	}
	// 위 처럼 생성자에서 자원(메모리)할당한 경우 소멸자를 만들어서
	// 자원해지를 해야 합니다.
	~Vector()
	{
		delete[] ptr;
	}
};
int main()
{
	// 핵심 : 아래 한줄이 실행될때의 메모리를 그릴수 있어야 합니다.
	//        생성자, 소멸자 코드를 잘 살펴 보세요.
	Vector v(5); 

//	v.resize(10);
}