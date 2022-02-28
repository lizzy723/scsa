// 33page template - 아주 중요합니다. 반드시 이해 해 두세요...

/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/

// 구현이 유사(동일)한 함수가 여러개 필요하면 여러개 함수를 만들지 말고
// "함수를 찍어낼때 사용할 틀(template)"을 만들자.


template<typename T>  
T square(T a)
{
	return a * a;
}

int main()
{
	square<int>(3);			// 1. int square(int) 함수를 생성하고
							// 2. square(3), 즉 생성된 함수 호출하는 기계어코드.
	
	square<double>(3.4);	// 1. double square(double) 함수 생성
							// 2. 생성된 double 버전 함수 호출.
}




