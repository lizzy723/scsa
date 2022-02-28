// 4_함수4 - 32page 인라인 함수

       int add1(int a, int b) { return a + b; }
inline int add2(int a, int b) { return a + b; }

int main()
{
	int n1 = add1(1, 2); // 1. 인자 2개를 약속된 장소(레지스터)에 넣고
						 // 2. 함수로 이동 ( call  add1 )		

	int n2 = add2(1, 2); // add2 의 기계어 코드 자체를 
						 // 이곳에 치환.
}
// 인라인 함수
// 장점 : 속도가 빠르다.
// 단점 : 여러번 치환되면 목적코드(실행파일)크기 증가
