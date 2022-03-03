#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// PopupMenu �� MenuItem �� �ƴ϶� PopupMenu ��ü��
// ���� �����ؾ� �մϴ�
// PopupMenu �� MenuItem �� ������ ��� Ŭ������
// �ʿ��մϴ�.

class BaseMenu
{
	std::string title;
public:
	BaseMenu(const std::string& s) : title(s) {}

	std::string getTitle() const { return title; }
};

class MenuItem : public BaseMenu
{
	int id;
public:
	MenuItem(const std::string& s, int n) : BaseMenu(s), id(n) {}
	void command()
	{
		std::cout << getTitle() << " �޴� ����" << std::endl;
		_getch();
	}
};

class PopupMenu : public BaseMenu
{
	std::vector<BaseMenu*> v; // ���� �޴� ����
public:
	PopupMenu(const std::string& s) : BaseMenu(s) {}

	void addMenu(BaseMenu* p) { v.push_back(p); }

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

	PopupMenu pmRice("����");
	pmRice.addMenu(&m1);
	pmRice.addMenu(&m2);

	PopupMenu pm("������ �޴�");

	pm.addMenu(&pmRice); // ?? �� ������ ������
	pm.addMenu(&m3);
	pm.addMenu(&m4);

	pm.command();  