#include <stdio.h>

namespace Audio
{
	void init() { printf("init audio\n"); }
}
namespace Video
{
	void init() { printf("init video\n"); }
}

// global namespace : ��� �̸��������� ���Ե��� ������
void init() { printf("init global\n"); }

using Audio::init; // using ����� ���þ�� �Լ� �ȶǴ� �ۿ� ������ �ֽ��ϴ�.

int main()
{
	// namespace �� ���� �ϴ� 3���� ��� - 8 page
	// 1. ������ �̸�(qualified name) ���
	Audio::init(); 

	// 2. using declaration(����) ���
//	using Audio::init;	// init �� Audio �̸� ���� ��밡��
	init();				// 
	::init(); // global ȣ��.		::  => "scope resolution" ������

	// 3. using directive(���þ�) ���
	using namespace Audio; // Audio ���� ��� �̸�(�Լ�, ����ü��)�� Audio ���� ����
	init();
}
