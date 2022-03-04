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
	// �Ʒ� �ڷᱸ�� ������ ������
	std::map< std::string, std::list<Book*> > book_rental;

	// ���� 3���� å �뿩
	book_rental["ȫ�浿"].push_back(new Book("����å1", "1234"));
	book_rental["ȫ�浿"].push_back(new Book("����å2", "1235"));
	book_rental["ȫ�浿"].push_back(new Book("����å3", "1236"));

	book_rental["�ܱ���"].push_back(new Book("����å1", "12"));
	book_rental["�ܱ���"].push_back(new Book("����å2", "13"));

	// Ư�� ����� ������ å�� �˰� �ʹ�.
	auto& s = book_rental["ȫ�浿"]; // s�� ���� Ÿ���ΰ��� ? �ᱹ list �Դϴ�.

	for (auto e : s)
		e->dump(); 

	// ȫ�浿�� �ѱ��� �ݳ��߽��ϴ�.
//	std::remove_if(s.begin(), s.end(), [](Book* p) { return p->title == "����å3"; });

	s.remove_if( [](Book* p) { return p->title == "����å3"; } );

	std::cout << "ȫ�浿 ������ å�� ���� : " << book_rental["ȫ�浿"].size() << std::endl;
}




