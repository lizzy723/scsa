// 3_����6- 26 page 3.11
#include <iostream>
#include <cstring> 
#include <string>

int main()
{
	// C ����� ���ڿ� ������ �ʹ� �����մϴ�.
	char cs1[] = "hello";
	char cs2[6];
//	cs2 = cs1;	// error.
//	strcpy(cs2, cs1); // �ǵ����  �Ϸ��� ���ڿ� ���� �Լ� ���

//	if (cs1 == cs2) {} // �׻� false, 
						// ���ڿ� ��ü�� ���ϰ� �;��ٸ� strcmp(s2,s1) ==0

	// C++ �� std::string �̶�� Ÿ���� ����ϸ�˴ϴ�.
	// (��Ȯ���� class�������� ���� ��������� Ÿ��)
	std::string s1 = "hello";
	std::string s2;

	// s1, s2 �� ������ int �� ������ ���� �����մϴ�.
	s2 = s1;
	if (s2 == s1) {}
	s2 = s1 + s2;
	std::cout << s2 << std::endl;
}