#include <stdio.h>

namespace Audio
{
	void init() { printf("init audio\n"); }
}
namespace Video
{
	void init() { printf("init video\n"); }
}

int main()
{
	// namespace �� ���� �ϴ� 3���� ��� - 8 page
	// 1. ������ �̸�(qualified name) ���
	Audio::init(); 

	// 2. using declaration(����) ���
	using Audio::init;	// init �� Audio �̸� ���� ��밡��
	init();				// 

	// 3. using directive(���þ�) ���
	using namespace Audio; // Audio ���� ��� �̸�(�Լ�, ����ü��)�� Audio ���� ����
	init();
}
