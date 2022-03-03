#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// 객체지향 핵심 : 필요한 타입을 먼저 설계 하자.!

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

		_getch(); // 키보드 누를때 대기!
	}
};

int main()
{
	MenuItem m1("김밥", 11);
	MenuItem m2("라면", 12);
	m1.command(); // 김밥 선택!
}