// std::endl ��� �Ŀ��� ��� << �� �̾ �� �ֳ��� ? ��..!
// 2_ǥ�������2
#include <iostream>
#include <iomanip>   // C++ ����� ������ �Լ����� �ִ� ���.
					 // (i/o manipulator ��� �մϴ�.)
// 15 page �߰��κ� ~
int main()
{
	std::cout << 10 << std::endl;

	std::cout << std::hex << 10 << std::endl;  // printf("%x", 10) �� �ǹ�
	std::cout << std::dec << 10 << std::endl;

	std::cout << std::setw(15) << 10 << std::endl;

	std::cout << std::setw(15) << std::setfill('#') << 10 << std::endl;
}
// �غ��� ���� cppreference.com ���� "std::setw" �˻��غ�����