// 9_map1
#include <iostream>
#include <string>
#include <set> 
#include <map> 

int main()
{
	// set : �Ѱ��� ����Ÿ(key)�� ����
	std::set<std::string> s = { "mon", "wed", "sun" };

	// map : 2���� ����Ÿ��(key-value) ����
	std::map<std::string, std::string> m = { {"mon","������"}, {"sun", "�Ͽ���"} };

	//[] �� ��밡��
	m["sat"] = "�����";

	std::cout << s["sun"] << std::endl;
}