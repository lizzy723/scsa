// 3_변수3 - 21 page 아래 부분

int main()
{
	double x[3] = { 1,2,3 };


	// auto : 우변의 표현식을 보고 좌변의 타입을 결정해 달라.
	//		  컴파일러가 결정, 실행시간의 성능저하는 전혀 없다.
	//        C++11 부터 나온 문법. 아주 널리 사용
	auto n = x[0]; // double n = x[0];

	// auto     : 우변으로 타입 결정
	// decltype : () 안에 표현식으로 타입결정 - C++11
	decltype(n) d; // double d


	const int c = 10;
	auto a = c;   // a의 타입을 예측해 보세요
					// 1. const int  => 이렇게 결정하면 오히려 개발자에게 
					//					불편하게 됩니다.
					// 2. int  => 정답

	// auto 는 정말 우변과 같은 타입은 아니고, 
	// 내부적으로 타입을 결정하는 규칙이 있습니다.(auto type deduction 검색해보세요)

	auto a1 = c;    // int a1 입니다.
	decltype(c) d1; // const int d1 입니다. 그런데. 초기값이 없다고 에러 나옵니다.

	
	int y[3];  // y의 정확한 타입은 int[3]

	auto a2 = y; // 1) int a2[3] = y;  이렇게 결정하면 "컴파일 에러가 됩니다."
				 // 2) int* a2 = y;    이렇게 결정하면 에러가 아닙니다.
					//					그래서 2번 입니다

	decltype(y) d2; // d2의 타입은 ?
					// 1) int d2[3]; => 답
					// 2) int* d2

}


