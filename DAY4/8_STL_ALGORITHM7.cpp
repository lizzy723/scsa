#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>

int main()
{
	std::string s = "ABCD";

	do
	{
		std::cout << s << std::endl;

	} while (std::next_permutation(s.begin(), s.end());
}