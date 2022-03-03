#include <iostream>
#include <string>
#include <vector>
#include <conio.h>


class BaseMenu
{
	std::string title;
public:
	BaseMenu(const std::string& s) : title(s) {}

	virtual ~BaseMenu() {}

	std::string getTitle() const { return title; }

	virtual void command() = 0; 
};



class MenuItem : public BaseMenu
{
	int id;
public:
	MenuItem(const std::string& s, int n) : BaseMenu(s), id(n) {}

	void command() override
	{
		std::cout << getTitle() << " �޴� ����" << std::endl;
		_getch();
	}
};

class PopupMenu : public BaseMenu
{
	std::vector<BaseMenu*> v; 
public:
	PopupMenu(const std::string& s) : BaseMenu(s) {}

	void addMenu(BaseMenu* p) { v.push_back(p); }

	void command() override
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

			if (cmd == sz + 1) 
				break; 

			if (cmd < 1 || cmd > sz + 1)
				continue;

			v[cmd - 1]->command();
		}

	}
};

int main()
{
	PopupMenu* root = new PopupMenu("ROOT MENU");
	PopupMenu* pm1 = new PopupMenu("���� ����");
	PopupMenu* pm2 = new PopupMenu("�ػ� ����");
	root->addMenu(pm1);
//	root->addMenu(pm2);
	pm1->addMenu(pm2);

	pm1->addMenu(new MenuItem("RED",   11));
	pm1->addMenu(new MenuItem("GREEN", 12));
	pm1->addMenu(new MenuItem("BLUE",  13));

	pm2->addMenu(new MenuItem("HD",  21));
	pm2->addMenu(new MenuItem("FHD", 22));
	pm2->addMenu(new MenuItem("UHD", 23));

	// ���� �����Ϸ��� ??
	root->command();
}
// ��ü���� ��� ���� ���α׷��̶�?
// ��ü�� �����ϰ�, ��ü���� ���踦 �����ϰ�, 
// ��ü���� �޼����� �ְ� �޴� ���̴� <<== ��� �Լ��� ȣ���Ѵٴ� �ǹ�
// ====> "��ü(Object) ����(Oriented) ���α׷���(Programming) => OOP"

// ���� ���� ���� ����� ���� ���� - "������ ����"�� ������ ������
// �� �ڵ尡 "Composite ����"�̶�� ������ ����Դϴ�.

// ���� ��ü(PoupuMenu)�� ������ü(MenuItem) �� �ƴ϶� 
// ���� ��ü �ڽŵ� �����Ҽ� �ִ�.
// => ���հ�ü�� ������ü�� ������ ��� Ŭ������ �ʿ� �ϴ�.

// Folder�� File �Ӿƴ϶� Folder ��ü �� �����Ѵ�.

