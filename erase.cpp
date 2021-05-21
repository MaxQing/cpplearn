#include <iostream>
#include <list>

int main() {
	std::list<int> dlist;
	std::list<int>::iterator iter;
	for (int i = 1; i < 11; ++i) {
		dlist.push_back(i);
	}
	iter = dlist.begin();
	std::cout << "Original data: " << std::endl;
	for (auto tmp : dlist) {
		std::cout << tmp << " ";
	}
	std::cout << std::endl;
	// if you will del a range of value, make parameter to two iterator.
	// like this:
	// dlist.erase(iter1, iter2);
	while (iter != dlist.end()) {
		if (*iter % 2) {
			iter = dlist.erase(iter);
		}
		else 
			++iter;
	}
	std::cout << "Current data: " << std::endl;
	for (auto tmp : dlist) {
		std::cout << tmp << " ";
	}
	std::cout << std::endl;
	return 0;
}
