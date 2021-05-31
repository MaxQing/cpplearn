#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>

int main(int argc, char* argv[]) {
	std::vector<int> vec;
	std::ifstream ifs(argv[1]);
	int temp;
	while (ifs >> temp) {
		vec.push_back(temp);
	}
	ifs.close();
	std::cout << "Input the number you wanted: " << std::endl;
	std::cin >> temp;
	int result = std::count(vec.begin(), vec.end(), temp);
	std::cout << "The " << "<" << temp << "> appears " << result << " times." << std::endl; 
	return 0;
}
