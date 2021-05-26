#include <corecrt_math.h>
#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char* argv[]) {
	const std::string noset = "bdfghjklpqty";
	std::ifstream ifs(argv[1]);
	std::string temp, longest_word;
	int max_size = 0;
	while (ifs >> temp) {
		if (temp.find_first_of(noset) != std::string::npos) {
			continue;
		}
		std::cout << temp << " ";
		if (max_size < temp.size()) {
			max_size = temp.size();
			longest_word = temp;
		}
	}
	ifs.close();
	std::cout << std::endl;
	std::cout << longest_word << std::endl;
	return 0;
}
