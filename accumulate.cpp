#include <iostream>
#include <fstream>
#include <numeric>
#include <vector>

int main(int argc, char* argv[]) {
	std::ifstream ifs(argv[1]);
	std::vector<int> vec;
	int sum = 0, temp;
	while (ifs >> temp) {
		vec.push_back(temp);
	}
	std::cout << "Sum result -> " << std::accumulate(vec.begin(), vec.end(), sum) << std::endl;
	return 0;
}
