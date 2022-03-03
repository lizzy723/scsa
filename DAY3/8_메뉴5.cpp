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
		std::cout << getTitle() << " 메뉴 선택" << std::endl;
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
			std::cout << sz + 1 << ". 종료" << std::endl;

			std::cout << "메뉴 선택하세요 >> ";

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
	PopupMenu* pm1 = new PopupMenu("색상 변경");
	PopupMenu* pm2 = new PopupMenu("해상도 변경");
	root->addMenu(pm1);
//	root->addMenu(pm2);
	pm1->addMenu(pm2);

	pm1->addMenu(new MenuItem("RED",   11));
	pm1->addMenu(new MenuItem("GREEN", 12));
	pm1->addMenu(new MenuItem("BLUE",  13));

	pm2->addMenu(new MenuItem("HD",  21));
	pm2->addMenu(new MenuItem("FHD", 22));
	pm2->addMenu(new MenuItem("UHD", 23));

	// 이제 시작하려면 ??
	root->command();
}
// 객체지향 언어 에서 프로그램이란?
// 객체를 생성하고, 객체간의 관계를 설정하고, 
// 객체간에 메세지를 주고 받는 것이다 <<== 멤버 함수를 호출한다는 의미
// ====> "객체(Object) 지향(Oriented) 프로그래밍(Programming) => OOP"

// 위와 같은 설계 방법을 배우는 수업 - "디자인 패턴"을 공부해 보세요
// 위 코드가 "Composite 패턴"이라는 디자인 기법입니다.

// 복합 객체(PoupuMenu)는 개별객체(MenuItem) 뿐 아니라 
// 복합 객체 자신도 보관할수 있다.
// => 복합객체와 개별객체는 공통의 기반 클래스가 필요 하다.

// Folder는 File 뿐아니라 Folder 자체 도 보관한다.

