// 1_namespace1.cpp   -  7page
#include <stdio.h>
// ���� : 1. ���α׷��� ���õ� ��ҳ��� �������� �и��Ҽ� �ִ�.
//        2. �̸� �浹�� ������ �ִ�. 
//        C �� ������ ��κ��� �� ����
namespace Audio
{
	void init()
	{
		printf("init audio\n");
	}
	// Audio ���� ��� �ڵ�(�Լ�, ����ü, ����������)�� ���⿡ �ۼ��մϴ�
}
namespace Video
{
	void init()
	{
		printf("init video\n");
	}
}

int main()
{
	Audio::init(); // ??
}