#include <iostream>
// 149 page

// �ٽ� : ��� Ŭ������ ���Ǵ� Ŭ������ ���鶧��
//		�ݵ�� �Ҹ��ڸ� �����Լ��� ������ �Ѵ�.

class Base
{
public:
	Base() {}
	virtual ~Base() {} // ���� �Ҹ���
};
class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived(),  �ڿ��Ҵ�" << std::endl; }
	~Derived() { std::cout << "~Derived(), �ڿ��ݳ�" << std::endl; }
};
int main()
{
//	Derived d;

	Base* p = new Derived;	// 1. �޸� �Ҵ�
							// 2. ������ ȣ�� - Derived()

	delete p;	// 1. �Ҹ��� ȣ��
				//     A. p�� Ÿ���� ���� �Ҹ��� �����ϸ� => ~Base()
				//     B. p�� ����Ű�� �޸𸮸� �����ؼ� �Ҹ��ڸ� �����ϸ� => ~Derived()

				// 2. p�� ����Ű�� �޸� ����
}