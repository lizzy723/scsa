#include <iostream>

int main()
{
	int x[5] = { 1,2,3,4,5 };



//	for (int e : x)  // int e = x[0]; int e = x[1] 의 코드가 반복되는 것
//	for (int* e : x) // int* e = x[0] 인데.. x[0]은 주소가 아니므로error
//	for (int& e : x) // int& e = x[0] 이므로 ok.. 
	for (auto& e : x)// ok.. 배열(또는 STL 컨테이너)의 요소 자체를 변경할때는
	{				// 이렇게 auto& 로 받는 경우가 가장 일반적인 경우 입니다.
		e = 0; 
	}


	for (int e : x)
		std::cout << e << ", ";
}