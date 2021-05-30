#include <iostream>
#include <string>

int main() {
	std::string temp_1{"123456"};
	std::string temp_2{"123457"};
	std::string temp_3{"124"};
	std::cout << temp_1.compare(temp_2) << std::endl;
	std::cout << temp_1.compare(temp_3) << std::endl;
	return 0;
}
