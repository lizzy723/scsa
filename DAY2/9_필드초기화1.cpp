// 9_�ʵ��ʱ�ȭ1.cpp
class Point
{
	// C++11 ���ʹ� ��� ����Ÿ�� �Ʒ�ó�� ���� �ʱ�ȭ �Ҽ� �ֽ��ϴ�.
	int x = 0;
	int y{ 0 }; // �̷����ص� �˴ϴ�.
public:
	Point() {}
	Point(int a)        : x(a) {}
	Point(int a, int b) : x(a), y(b) {}
};
// ���ڵ带 �����Ϸ��� �Ʒ� �ڵ�� �����մϴ�.
class Point
{
	int x;
	int y; 
public:
	Point()      : x(0), y(0) {}
	Point(int a) : x(a), y(0) {}
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
	Point pt(1,2);
}