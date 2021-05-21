#include <iostream>
#include <forward_list>

int main() {
	std::forward_list<int> sets;
	int results = 0;
	std::forward_list<int> answer;
	for (int i = 1; i < 11; ++i) {
		sets.push_front(i);
	}
	auto prev = sets.before_begin();
	auto curr = sets.begin();
	std::cout << "Original data: " << std::endl;
	for (auto tmp : sets) {
		std::cout << tmp << " ";
	}
	std::cout << std::endl;
	while (curr != sets.end()) {
		if (*curr % 2) {
			++results;
			answer.push_front(*curr);
			curr = sets.erase_after(prev);
		}
		else {
			prev = curr;
			++curr;
		}
	}
	std::cout << "In this forward_list, It has " << results << " odds." << std::endl;
	std::cout << "They are : " << std::endl;
	std::cout << "{ ";
	for (auto tmp : answer) {
		std::cout << tmp << " ";
	}
	std::cout << "}";
	std::cout << std::endl;
	return 0;
}
