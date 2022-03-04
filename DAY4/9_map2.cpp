// 9_map1
#include <iostream>
#include <string>
#include <set> 
#include <map> 
#include <list>
#include <algorithm>
class Book
{
public:
	std::string title;
	std::string isbn;
public:
	Book(const std::string& t, const std::string& i) : title(t), isbn(i) {}

	void dump() const
	{
		std::cout << title << "(" << isbn << ")" << std::endl;
	}
};

int main()
{	
	// 아래 자료구조 생각해 보세요
	std::map< std::string, std::list<Book*> > book_rental;

	// 고객이 3권의 책 대여
	book_rental["홍길동"].push_back(new Book("좋은책1", "1234"));
	book_rental["홍길동"].push_back(new Book("좋은책2", "1235"));
	book_rental["홍길동"].push_back(new Book("좋은책3", "1236"));

	book_rental["외국인"].push_back(new Book("영어책1", "12"));
	book_rental["외국인"].push_back(new Book("영어책2", "13"));

	// 특정 사람이 빌려간 책을 알고 싶다.
	auto& s = book_rental["홍길동"]; // s는 무슨 타입인가요 ? 결국 list 입니다.

	for (auto e : s)
		e->dump(); 

	// 홍길동이 한권을 반납했습니다.
//	std::remove_if(s.begin(), s.end(), [](Book* p) { return p->title == "좋은책3"; });

	s.remove_if( [](Book* p) { return p->title == "좋은책3"; } );

	std::cout << "홍길동 빌려간 책의 갯수 : " << book_rental["홍길동"].size() << std::endl;
}




