#include <iostream>

int main()
{
	int x[5] = { 1,2,3,4,5 };



//	for (int e : x)  // int e = x[0]; int e = x[1] �� �ڵ尡 �ݺ��Ǵ� ��
//	for (int* e : x) // int* e = x[0] �ε�.. x[0]�� �ּҰ� �ƴϹǷ�error
//	for (int& e : x) // int& e = x[0] �̹Ƿ� ok.. 
	for (auto& e : x)// ok.. �迭(�Ǵ� STL �����̳�)�� ��� ��ü�� �����Ҷ���
	{				// �̷��� auto& �� �޴� ��찡 ���� �Ϲ����� ��� �Դϴ�.
		e = 0; 
	}


	for (int e : x)
		std::cout << e << ", ";
}