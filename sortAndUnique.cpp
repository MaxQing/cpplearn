#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

void elimDups(std::vector<std::string> &set) {
	std::sort(set.begin(), set.end());
	auto end_unique = std::unique(set.begin(), set.end());
	set.erase(end_unique, set.end());
}

int main(int argc, char *argv[]) {
	std::ifstream ifs(argv[1]);
	std::vector<std::string> result_set;
	std::string temp;
	while (ifs >> temp) {
		if (temp != ".") {
			result_set.push_back(temp);
		}
	}
	ifs.close();
	for (std::string tmp : result_set) {
		std::cout << tmp << " ";
	}
	std::cout << std::endl;
	elimDups(result_set);
	for (std::string tmp : result_set) {
		std::cout << tmp << " ";
	}
	std::cout << std::endl;
	return 0;
}
