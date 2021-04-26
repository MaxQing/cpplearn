#include <iostream>

bool compareLen(const std::string &s1, const std::string &s2) {
	if(s1.size() >= s2.size()) {
		return true;
	}
	return false;
}

bool (*pf)(const std::string &, const std::string &);

int main() {
	pf = compareLen;
	//pf = &compareLen;
	//the address operator is optional.
	const std::string s1 = "short";
	const std::string s2 = "longer";
	std::cout << "Call original function directlly." << std::endl;
	std::cout << compareLen(s1, s2) << std::endl;
	std::cout << "Call function by pointer to function." << std::endl;
	std::cout << pf(s1, s2) << std::endl;
	return 0;
}
