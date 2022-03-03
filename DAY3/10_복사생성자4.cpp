#include <iostream>
#include <cstring>
#include <string>

// 정답은 "문자열이 필요하면 char* 사용하지 말고
//       "std::string" 사용하면 됩니다.

// 가장 좋은 코드
class Person
{
	std::string name;
	int age;
public:
	Person(const std::string& n, int a) : name(n), age(a)
	{
	}
};

int main()
{
	Person p1("kim", 2);

	Person p2 = p1; 
}

