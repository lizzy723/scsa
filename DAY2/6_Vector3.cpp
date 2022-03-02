#include <iostream>

int main()
{
	// 4. 사용자가 -1을 입력할때 까지 계속 입력 받고 싶습니다.
	//   단, 입력된 모든 값은 보관되어 있어야 합니다.

//	int score[5]; // 이렇게 하면 중간에 지울수 없습니다.
				  // 함수 끝날때 자동으로 파괴 됩니다.

	int size = 5;
	int* score = new int[size];

	int count = 0;

	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (n == -1) 
			break;

		score[count] = n;
		++count;

		if (count == size)
		{
			int* temp = new int[size + 5];

			memcpy(temp, score, sizeof(int)*size);

			delete[] score; // score 를 지우는 것이 아니라	
							// score 가 담고 있는 주소의 메모리제거 입니다.
			score = temp;
			size = size + 5;
		}
	}
	std::cout << "입력된 갯수 : "         << count << std::endl;
	std::cout << "동적 할당된 배열크기 : " << size << std::endl;

	for (int i = 0; i < count; i++)
		std::cout << score[i] << ", ";
}