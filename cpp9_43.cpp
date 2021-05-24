#include <iostream>
#include <vector>
#include <string>

void test_func(std::string &s, const std::string &oldVal, const std::string &newVal) {
	if (!s.size()) {
		return;
	}
	auto iter = s.begin();
	while (iter < s.end()) {
		auto iter_1 = iter;
		auto iter_2 = oldVal.begin();
		while (iter_2 != oldVal.end() && *iter_1 == *iter_2) {
			++iter_1;
			++iter_2;
		}
		if (iter_2 == oldVal.end()) {
			iter = s.erase(iter, iter_1);
			if (newVal.size()) {
				iter_2 = newVal.end();
				do {
					iter_2--;
					iter = s.insert(iter, *iter_2);
				} while (iter_2 > newVal.begin());
			}
			iter += newVal.size();
		} else {
			iter++;
		}
	}
}

int main() {
	std::string s = "tho thru tho!";
	std::cout << "Original -> " << s << std::endl;
	test_func(s, "thru", "through");
	std::cout << "New -> " << s << std::endl;
	return 0;
}
