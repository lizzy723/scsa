// 10_���������6

class Point
{
	int x, y;
public:
	Point() {}								  // ����Ʈ ������
	Point(const Point& p) : x(p.x), y(p.y) {} // ���� ������
};

int main()
{
	Point p1;     // ����Ʈ ������ ȣ��
	Point p2(p1); // ���� ������ ȣ��
}