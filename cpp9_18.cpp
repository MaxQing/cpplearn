#include <iostream>
#include <deque>

int main() {
	std::deque<std::string> que;
	std::string tmp;
	std::deque<std::string>::iterator iter = que.begin();
	while (std::cin >> tmp) {
		if (tmp != "endl") {
			iter = que.insert(iter, tmp);
		}
		else {
			break;
		}
	}
	for (auto tmp : que) {
		std::cout << "value -> " << tmp << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
