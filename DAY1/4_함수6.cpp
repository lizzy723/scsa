// 4_함수6 - 37page. 후위 반환 타입

// C/C++의 전통적인 함수 모양
int square(int a)
{
	return a * a;
}
// C++11 에서 새로나온 함수 모양
// 후위 반환 타입(suffix return type) 이라는 문법
auto square2(int a) -> int
{
	return a * a;
}

int main()
{
	square(3);
}