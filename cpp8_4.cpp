#include <iostream>
#include <fstream>
#include <vector>

int main() {
	std::ifstream ifs("./test_data.txt");
	if (!ifs) {
		std::cerr << "File not exists." << std::endl;
		return -1;
	}
	std::string line;
	std::vector<std::string> words;
	while (getline(ifs, line)) {
		words.push_back(line);
	}
	ifs.close();
	std::vector<std::string>::iterator it = words.begin();
	while (it != words.end()) {
		std::cout << *it++ << std::endl;
	}
	return 0;
}
