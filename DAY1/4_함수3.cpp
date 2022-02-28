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

	// 템플릿 사용시 "타입인자"는 생략가능합니다.
	// 생략시 함수인자를 보고 T 타입이 결정됩니다.
	square(3); // 3을보고 T = int 로 결정
}
// 인자 타입과 리턴 타입이 다른 경우에는 템플릿을 사용할 수 없나요? => 곧 등장합니다.


// Code Bloat(코드 폭팔)

// 템플릿 사용시 너무나 많은 타입에 대해서 함수(클래스)가 생성되어서

// 실행파일 크기증가(코드메모리증가) 되는 현상!!!

// "임베디드 환경"등 메모리가 부족한 환경에서는 주의해야 합니다.

