#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

int main(int argc, char* argv[]) {
	std::ifstream ifs(argv[1]);
	std::string line, temp;
	std::vector<std::string> sVec;
	while (std::getline(ifs, line)) {
		std::istringstream iss(line);
		while (iss >> temp) {
			sVec.push_back(temp);
		}
	}
	for (auto temp : sVec) {
		std::cout << "Word -> " << temp << std::endl;
	}
	return 0;
}
