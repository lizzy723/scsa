// 4_��Ӱ�������1 - 135page

#include <iostream>
// Derived ��ü ������
// 1. ��� Ŭ���� �����ڰ� ȣ�� - �׻� ����Ʈ ���� ���
// 2. �Ļ� Ŭ���� ������ ȣ��.

// �׷���, ��Ȯ�� ������ �߿��մϴ�.

class Base
{
	int data1;
public:
	Base() {  }
	Base(int a) {  }
	~Base() { }
};
class Derived : public Base
{
	int data2;
public:
	// ����ڰ� ���� �ڵ�		// �����Ϸ��� ������ �ڵ�
	Derived()      { }		// Derived()      : Base() { }	
	Derived(int a) { }		// Derived(int a) : Base() { }
	~Derived()     { }		// ~Derived()     { ....; ~Base(); }
};
int main()
{
	Derived d1;			// call Derived::Derived() 
//	Derived d2(5);      // call Derived::Derived(int)  �� �ڵ� ����
}