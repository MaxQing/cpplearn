#include <iostream>
#include <string>

void add_fix(std::string &id, const std::string &prefix, const std::string &suffix) {
	id.insert(0, "-");
	id.insert(0, prefix);
	id.insert(id.size() - 1, "-");
	id.insert(id.size(), suffix);
}

int main() {
	std::string temp{"asjdkfj"};
	std::cout << temp << std::endl;
	add_fix(temp, "START", "END");
	std::cout << temp << std::endl;
	return 0;
}
