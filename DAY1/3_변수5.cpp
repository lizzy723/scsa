struct Point
{
	int x = 0;
	int y = 0;
};
int main()
{
	Point pt = { 1,2 };
	
	auto[a1, a2] = pt; // int a1 = pt.x;
					   // int a2 = pt.y; �� ������ �ǹ� �Դϴ�.

	int arr[3] = { 1,2,3 };

	auto[b1, b2, b3] = arr; // �迭�� �����մϴ�.
	//-----------------------------------

	auto [c1, c2]     = arr; // error. ���� �¾ƾ� �մϴ�.
	int  [d1, d2, d3] = arr; // error. auto �� �����մϴ�.

	// �̹����� �̸��� "structured binding" �Դϴ�. - 25 page

}
