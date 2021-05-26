#include <iostream>
#include <string>

void find_char(std::string &s, const std::string &chars) {
	std::cout << "Search char of " << chars << " " << "in " << s << std::endl;
	std::string::size_type pos = 0;
	while ((pos = s.find_first_of(chars, pos)) != std::string::npos) {
		std::cout << "pos: " << pos << ", char: " << s[pos] << std::endl;
		pos++;
	}
}

int main() {
	std::string s = "ab2c3d7R4E6";
	find_char(s, "1234567890");
	return 0;
}
