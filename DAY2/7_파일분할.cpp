// 7_���Ϻ��� - vector 7�� �����ؿ�����

// Ŭ������ ����� 2���� ���
// 1. Ŭ���� ����ȿ� ����Լ��� ��� ����..
// 2. Ŭ������ ����� ���� ���Ϸ� �и�

#include <iostream>

#include "Vector.h"


int main()
{
	Vector v(5);

	v.setAt(0, 10); // v[0] = 10 �� �ǹ�
	v.setAt(1, 15); // v[1] = 15

	v.resize(10);

	std::cout << v.getAt(1) << std::endl; // 15
}