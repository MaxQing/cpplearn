#include <iostream>
#include <vector>

int main() {
	std::vector<std::string> svec;
	svec.reserve(3);
	svec.push_back("wuhu");
	svec.push_back("asdfkjl");
	std::cout << "Size -> "<< svec.size() << std::endl;
	std::cout << "Capacity -> " << svec.capacity() << std::endl;
	return 0;
}
