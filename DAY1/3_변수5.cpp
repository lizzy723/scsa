struct Point
{
	int x = 0;
	int y = 0;
};
int main()
{
	Point pt = { 1,2 };
	
	auto[a1, a2] = pt; // int a1 = pt.x;
					   // int a2 = pt.y; 와 동일한 의미 입니다.

	int arr[3] = { 1,2,3 };

	auto[b1, b2, b3] = arr; // 배열도 가능합니다.
	//-----------------------------------

	auto [c1, c2]     = arr; // error. 갯수 맞아야 합니다.
	int  [d1, d2, d3] = arr; // error. auto 만 가능합니다.

	// 이문법의 이름은 "structured binding" 입니다. - 25 page

}
