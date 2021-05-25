#include <iostream>
#include <string>

void add_fix(std::string &id, const std::string &prefix, const std::string &suffix) {
	id.insert(id.begin(), 1, '-');
	id.insert(id.begin(), prefix.begin(), prefix.end());
	id.append("-");
	id.append(suffix.begin(), suffix.end());
}

int main() {
	std::string temp = "Frank";
	add_fix(temp, "Mr", "III");
	std::cout << "New name -> " << temp << std::endl;
	return 0;
}
