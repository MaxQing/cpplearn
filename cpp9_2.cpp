#include <iostream>
#include <list>
#include <deque>

int main() {
	std::deque<int> deque_int;
	std::list<std::deque<int>> list_deque;
	for (int i = 0; i < 4; ++i) {
		deque_int.push_back(i);
	}
	list_deque.push_back(deque_int);
	for (std::deque<int> temp : list_deque) {
		std::deque<int>::const_iterator begin = temp.begin();
		while (begin != temp.end()) {
			std::cout << "Value -> " << *begin++ << std::endl;
		}
	}
	return 0;
}
