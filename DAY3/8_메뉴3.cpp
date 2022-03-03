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
		system("cls");

		int sz = v.size();

		for (int i = 0; i < sz; i++)
		{
			std::cout << i + 1 << ". " << v[i]->getTitle() << std::endl;
		}
		std::cout << sz << ". 종료" << std::endl;
		std::cout << "메뉴 선택하세요 >> ";

		int cmd;
		std::cin >> cmd;

		// 선택된 메뉴 실행!! 어떻게 할까요 ?
		// ?
	}
};
int main()
{
	MenuItem m1("김밥", 11);
	MenuItem m2("라면", 12);
	
	PopupMenu pm("오늘의 메뉴");

	pm.addMenu(&m1);
	pm.addMenu(&m2);

	pm.command();  // 팝업메뉴 선택시 하위 메뉴를 보여 주면 됩니다.
					// 1. 김밥
					// 2. 라면
					// >> 메뉴를 선택하세요...
}