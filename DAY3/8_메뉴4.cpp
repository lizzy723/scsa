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
		std::cout << getTitle() << " 메뉴 선택" << std::endl;

		_getch();
	}
};

class PopupMenu
{
	std::string title;
	std::vector<MenuItem*> v; // 하위 메뉴 보관
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
			std::cout << sz + 1 << ". 종료" << std::endl;

			std::cout << "메뉴 선택하세요 >> ";

			int cmd;
			std::cin >> cmd;

			if (cmd == sz + 1) // 종료 메뉴 선택
				break; // 또는 return

			if (cmd < 1 || cmd > sz + 1) // 잘못된 입력
				continue;

			// 선택된 메뉴 실행!! 어떻게 할까요 ?
			v[cmd - 1]->command();
		}

	}
};

int main()
{
	MenuItem m1("참치김밥", 11);
	MenuItem m2("소고기김밥", 11);
	MenuItem m3("라면", 12);
	MenuItem m4("돈까스", 13);

	PopupMenu pmRice;
	pmRice.addMenu(&m1);
	pmRice.addMenu(&m2);

	PopupMenu pm("오늘의 메뉴");

	pm.addMenu(&pmRice); // ?? 잘 생각해 보세요
	pm.addMenu(&m3);
	pm.addMenu(&m4);

	pm.command();  