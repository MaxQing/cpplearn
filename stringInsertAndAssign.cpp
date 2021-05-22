#include <iostream>

int main() {
	const char *cp = "Stately, plump Buck.";
	std::string s;
	s.assign(cp, 7);
	std::cout << s << std::endl;
	s.insert(s.size(), cp + 7);
	std::cout << s << std::endl;
	return 0;
}
