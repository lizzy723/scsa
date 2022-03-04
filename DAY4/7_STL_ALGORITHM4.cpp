// 7_STL_ALGORITHM1
#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <algorithm> 

bool fn(int a)
{
	return a % 3 == 0;
}

int main()
{
	std::vector<int> v = { 1,2, 6,4, 5,8, 9,3 };
	
	auto ret1 = std::find_if(v.begin(), v.end(), fn);

	// ���� ǥ����(lambda expression)
	// �Լ� �̸�(�ּ�)�� �ʿ��� �ڸ��� �Լ� ������ ���� ����� ���� - C++11
	// STL ���� __if() �˰��򿡼� �θ� ���ȴ�

	// [] : ���ٰ� ���۵��� �˸��� "lambda introducer"
	
	auto ret2 = std::find_if(v.begin(), v.end(), 
						[](int a){return a % 3 == 0;} );

}