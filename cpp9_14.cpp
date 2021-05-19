#include <iostream>
#include <list>
#include <vector>

int main() {
	std::list<const char *> c_charList = {"hello", "world", "!"};
	std::vector<std::string> svec;
	svec.assign(c_charList.begin(), c_charList.end());
	for (auto temp : svec) {
		std::cout << temp << " ";
	}
	std::cout << std::endl;
	return 0;
}
