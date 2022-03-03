// 5_virtual1 - 140 page
#include <iostream>
#include <vector>

class Animal
{
public:
	int age;
};
class Dog : public Animal
{
public:
	int color;
};

class Cat : public Animal {};

// upcasting ���� 1. 
//void NewYear(Dog* p)  // Dog�� ó�������� �Լ�
void NewYear(Animal* p) // ��� ����, ����(���� ��� Ŭ������ �Ļ�Ŭ����)
{						// �� ó�� ������ �Լ�
	++(p->age);

	// ��, �� �ȿ����� ��� ������ ������ Ư¡(age)�� ���� ����
	// Dog�� �����ص� �Ʒ�ó�� color ������ �ȵ˴ϴ�.
//	p->color = 10; // error
}
int main()
{
	Dog dog; NewYear(&dog); // ?
	Cat cat; NewYear(&cat); // ?

	std::vector<Dog*> v1;    // Dog �� ���� ������ vector
	std::vector<Animal*> v2; // ��� ������ �����ϴ� vector.
							// upcasting ���� 2. ������ �����ϴ� �����̳� �����!
}