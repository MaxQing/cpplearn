#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

struct PersonInfo {
	std::string name;
	std::vector<std::string> phones;
};

int main(int argc, char *argv[]) {
	std::string line, phoneNum;
	std::vector<PersonInfo> people;
	std::ifstream ifs(argv[1]);
	while (std::getline(ifs, line)) {
		PersonInfo temp;
		std::istringstream iss(line);
		iss >> temp.name;
		while (iss >> phoneNum) {
			temp.phones.push_back(phoneNum);
		}
		people.push_back(temp);
	}
	for (auto temp : people) {
		std::cout << "Name -> " << temp.name << std::endl;
		std::cout << "Phones: ";
		for (int i = 0; i < temp.phones.size(); ++i) {
			std::cout << "<" << temp.phones[i] << ">" << " | ";
		}
		std::cout << std::endl;
	}
	return 0;
}
