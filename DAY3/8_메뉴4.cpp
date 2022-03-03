#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

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

		_getch();
	}
};

class PopupMenu
{
	std::string title;
	std::vector<MenuItem*> v; // ���� �޴� ����
public:
	PopupMenu(const std::string& s) : title(s) {}

	void addMenu(MenuItem* p) { v.push_back(p); }

	void command()
	{
		while (1)
		{
			system("cls");
			int sz = v.size();

			for (int i = 0; i < sz; i++)
			{
				std::cout << i + 1 << ". " << v[i]->getTitle() << std::endl;
			}
			std::cout << sz + 1 << ". ����" << std::endl;

			std::cout << "�޴� �����ϼ��� >> ";

			int cmd;
			std::cin >> cmd;

			if (cmd == sz + 1) // ���� �޴� ����
				break; // �Ǵ� return

			if (cmd < 1 || cmd > sz + 1) // �߸��� �Է�
				continue;

			// ���õ� �޴� ����!! ��� �ұ�� ?
			v[cmd - 1]->command();
		}

	}
};

int main()
{
	MenuItem m1("��ġ���", 11);
	MenuItem m2("�Ұ����", 11);
	MenuItem m3("���", 12);
	MenuItem m4("���", 13);

	PopupMenu pmRice;
	pmRice.addMenu(&m1);
	pmRice.addMenu(&m2);

	PopupMenu pm("������ �޴�");

	pm.addMenu(&pmRice); // ?? �� ������ ������
	pm.addMenu(&m3);
	pm.addMenu(&m4);

	pm.command();  