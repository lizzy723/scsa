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
int main()
{
	Point pt;
}