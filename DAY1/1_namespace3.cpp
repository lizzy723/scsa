// 1_namespace3.cpp - 9page ����

// 1. ��� C++ ǥ���� std ��� �̸������ȿ� �ֽ��ϴ�.

#include <algorithm>  // C++ ǥ�� �Լ��� ������� min �� �ֽ��ϴ�.
//using namespace std;

int count = 10;

int main()
{
//	int n1 = min(3, 4); // error
	int n2 = std::min(3, 4); // ok

	int n3 = count; // �� �ڵ尡 ��??? ���� �ϱ�� ?
					// C++ ǥ�ؿ� "std::count()" �� �ֽ��ϴ�.
					// using namespace std ������ 
					// �������� count �� ǥ�� count()�Լ��̸��� �浹 �Դϴ�
}
