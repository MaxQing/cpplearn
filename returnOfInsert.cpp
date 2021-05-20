#include <iostream>
#include <vector>

int main() {
	std::vector<std::string> vec;
	std::vector<std::string>::iterator iter = vec.begin();
	std::string temp;
	while (std::cin >> temp) {
		if (temp != "endl"){
			iter = vec.insert(iter, temp);
		}
		else {
			break;
		}
	}
	for (auto tmp : vec) {
		std::cout << "value: " << tmp << " " << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
