// 9_map1
#include <iostream>
#include <string>
#include <set> 
#include <map> 

int main()
{
	// set : 한개의 데이타(key)를 저장
	std::set<std::string> s = { "mon", "wed", "sun" };



	// map : 2개의 데이타쌍(key-value) 저장하는 set(tree)
	std::map<std::string, std::string> m = { {"mon","월요일"}, {"sun", "일요일"} };

	//[] 도 사용가능
	m["sat"] = "토요일";

	std::cout << m["sun"] << std::endl;
		
	// C++ : map 이라고 합니다.
	// C#, python, java 등에서는 "dictionary" 라고 합니다.
	//							파이썬 : dict
}