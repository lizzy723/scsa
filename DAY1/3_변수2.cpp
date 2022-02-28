// 20page~ 중요합니다
struct Point
{
	int x, y;
};

int main()
{
	int   n1  = 10;
	Point p1  = { 1,2 };
	int x1[3] = { 1,2,3 };

	// C++11 부터 모든 종류의 변수는 {}로 초기화가 가능해졌습니다.
	// 하나의 방법으로 초기화 할수 있다고 해서
	// "일관된 초기화(uniform initialization)" 이라고 합니다.
	// "중괄호 초기화(brace init)" 이라고도 합니다.
	int   n2 = { 10 };
	Point p2 = { 1,2 };
	int x2[3] = { 1,2,3 };

	// =을 빼도 됩니다.
	int   n3 { 10 };
	Point p3 { 1,2 };
	int x3[3]{ 1,2,3 };

	// direct(직접) initialization : = 이 없는 경우
	// copy(복사)   initialization : = 이 있는 경우
	//			=> 2개는 약간의 차이가 있긴합니다. (클래스 배울때 설명)
	//			   위 3줄의 경우는 동일합니다.(클래스에서만 차이가 있습니다.)

	// 21 page 내용
	int n4 = 3.4; // ??
	int n5 = { 3.4 }; // ?
}