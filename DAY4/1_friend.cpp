// 1_friend - 75page
class Bike
{
	int gear;
public:

	// friend �Լ� : ��� �Լ��� �ƴ����� private ������ �����ϰ� �ش޶�� ����
	// 1. ����� �ϸ� ���� �ʳ��� ?? => ����� �Ҽ� �������� �ֽ��ϴ�.(������������)

	// 2. setGear(), getGear()����� ���� �ʳ��� ?
	//   => setGear(), getGear() �� ����� ���� ��� ������ ���� �����ϰ� �ϴ°�
	//   => friend �� �Լ� �Ѱ������� ���� �����ϰ�.

	friend void foo();
};

void foo()
{
	Bike b;
	b.gear = 10; // ok 
}

int main()
{
	foo();
}