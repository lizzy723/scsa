// ���ڰ��� �������� �ʴ� �Լ��� ������� �մϴ�.
// ������ ���� �ڵ�� ?
void f1(int n) {}        // 1  ==> ��..
void f1(const int& n) {} // 2  ==> ���� �̷��� ���� ������
						 //      int �� ũ�Ⱑ ũ�� �ʰ�, 1���� 2������	
						 //		 �����Ϸ� ����ȭ�� �ߵ˴ϴ�.

// ����
// 1. ������ ���� �����ϴ� ���(out parameter ��� �θ��ϴ�)
//    => ������ �� ���� ��� �����ϴ�.
//    void inc(int* p) { ++(*p);}
//    void inc(int& r) { ++r;}

// 2. ������ ���� �������� �ʴ� ��� ( in parameter ��� �մϴ�.)

//  A. primitive type �� ���(int, char, double��) : call by value�� �ϼ���
//								ex) void foo(int n) {}
//								ex) void foo(const int& n) {}  <== �̷��� ����������

//  B. user define type �� ��� : const reference �� �ϼ���
//								ex) void foo(const Rect& ) {}
//								ex) void foo(Rect ) {}  <<= �̷��� ���� ������