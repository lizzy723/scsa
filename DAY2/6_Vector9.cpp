#include <iostream>

// �̹� C++ ǥ�ؿ� std::vector�� �ֽ��ϴ�(�����迭)
// C++ ǥ�ض��̺귯���� "STL ( Standard Template Library )" ��� �մϴ�.
#include <vector>

int main()
{
	std::vector<int> v1(5); 

	v1[0] = 10; // ��¥ �迭ó�� [] ����˴ϴ�.
	v1[1] = 15;
	v1.resize(10);

	std::cout << v1.size() << std::endl;
	//---------------------------
	std::vector<int> v2 = { 1,2,3 }; // ��¥�迭ó�� �ʱ�ȭ�� �����մϴ�

	v2.push_back(10); // ���� �Ѱ� �߰�
	std::cout << v2.size() << std::endl;
}