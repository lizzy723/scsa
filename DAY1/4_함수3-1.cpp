// 4_�Լ�3-1
#include <iostream>

template<typename T>
T square(T a)			// �Լ��� �ƴմϴ�. �����Ϸ��� �Լ��� ����
{						// ����ϴ� Ʋ�Դϴ�. �޸𸮿� �����ϴ� ���� �ƴմϴ�.
	return a * a;
}

int main()
{
//	printf("%p\n", &square); // ?? �ɱ�� ?? �߻����� ������.
							// error. Ʋ�� �޸𸮿� �������� �ʽ��ϴ�.

	printf("%p\n", &square<int> ); // ok.. Ʋ�� ������ ������ �Լ���
									// �޸𸮿� ���� �մϴ�.

	std::cout << &square<double> << std::endl; // ����,cout ���� ����ص� �˴ϴ�.
}
// �ٽ� 
// square      : �Լ��� �ƴմϴ�. �Լ��� ����� Ʋ(template)�Դϴ�.
// square<int> : �Լ� �Դϴ�

