#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// ��ü���� �ٽ� : �ʿ��� Ÿ���� ���� ���� ����.!

class MenuItem
{
	std::string title;
	int id;
public:
	MenuItem(const std::string& s, int n) : title(s), id(n) {}

	std::string getTitle() const { return title; }

	void command()
	{
		std::cout << getTitle() << " �޴� ����" << std::endl;

		_getch(); // Ű���� ������ ���!
	}
};

int main()
{
	MenuItem m1("���", 11);
	MenuItem m2("���", 12);
	m1.command(); // ��� ����!
}