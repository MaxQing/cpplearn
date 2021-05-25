#include <iostream>
#include <vector>
#include <string>

void replace_string(std::string &s, const std::string &oldVal, const std::string &newVal) {
	std::size_t p = 0;
	while ((p = s.find(oldVal, p)) != std::string::npos) {
		s.replace(p, oldVal.size(), newVal);
		p += newVal.size();
	}
}

int main() {
	std::string temp = "tho asdf sadklfjk tho";
	std::cout << "Original -> " << temp << std::endl;
	replace_string(temp, "tho", "Me"); 
	std::cout << "Now -> " << temp << std::endl;
	return 0;
}
