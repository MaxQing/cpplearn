#include <iostream>
#include <deque>
#include <stack>

int main() {
	std::deque<int> ide;
	for (int i = 0; i < 10; ++i) {
		ide.push_back(i);
	}
	std::stack<int> stk(ide);
	while (!stk.empty()) {
		std::cout << stk.top() << std::endl;
		stk.pop();
	}
	return 0;
}
