#include <iostream>

int main()
{
	// 4. ����ڰ� -1�� �Է��Ҷ� ���� ��� �Է� �ް� �ͽ��ϴ�.
	//   ��, �Էµ� ��� ���� �����Ǿ� �־�� �մϴ�.

//	int score[5]; // �̷��� �ϸ� �߰��� ����� �����ϴ�.
				  // �Լ� ������ �ڵ����� �ı� �˴ϴ�.

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

			delete[] score; // score �� ����� ���� �ƴ϶�	
							// score �� ��� �ִ� �ּ��� �޸����� �Դϴ�.
			score = temp;
			size = size + 5;
		}
	}
	std::cout << "�Էµ� ���� : "         << count << std::endl;
	std::cout << "���� �Ҵ�� �迭ũ�� : " << size << std::endl;

	for (int i = 0; i < count; i++)
		std::cout << score[i] << ", ";
}