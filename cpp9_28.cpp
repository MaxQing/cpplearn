#include <iostream>
#include <forward_list>

bool test_func(std::forward_list<std::string> &item, const std::string target,const std::string follower) {
	auto prev = item.before_begin();
	auto curr = item.begin();
	while (curr != item.end()) {
		if (*curr == target) {
			curr = item.insert_after(curr, follower);
			return true;
		}
		else  {
			prev = curr;
			++curr;
		}
	}
	return false;
}

int main() {
	std::forward_list<std::string> lst = {"afk", "msc", "vee"};
	bool result;
	result = test_func(lst, "vee", "follower");
	if (result) {
		std::cout << "Insert successfully." << std::endl;
	}
	else {
		std::cout << "Insert Failed." << std::endl;
	}
	for (auto tmp : lst) {
		std::cout << tmp << " ";
	}
	std::cout << std::endl;
	return 0;
}
