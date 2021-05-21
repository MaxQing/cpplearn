#include <iostream>
#include <vector>

int main() {
	std::vector<std::string> vec;
	vec.push_back("string");
	std::string val_1 = *vec.begin();
	std::string val_2 = vec.front();
	std::string val_3 = vec.back();
	std::cout << "val_1 -> " << val_1 << std::endl;
	std::cout << "val_2 -> " << val_2 << std::endl;
	std::cout << "val_3 -> " << val_3 << std::endl;
	return 0;
}
