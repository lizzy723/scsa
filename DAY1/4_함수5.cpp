// 35page 함수 삭제 문법 - C++11 부터 제공

// 두 정수의 최대 공약수 구하는 함수를 생각해 봅시다.
int gcd(int a, int b)
{
	return 0; // 구현은 교재(35p) 참고
}

//double gcd(double a, double b); // 핵심 : 함수의 선언만 제공, 구현이 없습니다.

double gcd(double a, double b) = delete; // C++11에서 나온
									// 함수 삭제라는 문법
									// 삭제된 함수를 사용하면 컴파일 에러발생
int main()
{
	gcd(4, 10);
	gcd(3.4, 2.1); // 선언만있을때 : call 링커가 double버전의 함수를 찾아서 요기에 주소를적어라.
					// 삭제되었을때 : 컴파일 에러
}
// 1. gcd(int, int) 가 있는데.
// 2. 사용자가 gcd(실수, 실수) 처럼 사용했습니다.
// 3. gcd(double, double) 버전의 함수가

// 없다면       : gcd(int, int) 사용가 호출됩니다. 에러 아닙니다.
// 선언만있다면 : 사용시 링크 에러 발생
// 삭제 되었다면 : 사용시 컴파일 에러 발생

