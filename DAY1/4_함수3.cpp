// 33page template - ���� �߿��մϴ�. �ݵ�� ���� �� �μ���...

/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/

// ������ ����(����)�� �Լ��� ������ �ʿ��ϸ� ������ �Լ��� ������ ����
// "�Լ��� ���� ����� Ʋ(template)"�� ������.


template<typename T>  
T square(T a)
{
	return a * a;
}

int main()
{
	square<int>(3);			// 1. int square(int) �Լ��� �����ϰ�
							// 2. square(3), �� ������ �Լ� ȣ���ϴ� �����ڵ�.
	
	square<double>(3.4);	// 1. double square(double) �Լ� ����
							// 2. ������ double ���� �Լ� ȣ��.
}




