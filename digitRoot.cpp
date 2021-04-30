#include <iostream>

int digit_root(int num) {
	if (num == 0) {
		return 0;
	}
	else if (num % 9 == 0) {
		return 9;
	}
	return num % 9;
}


int main() {
	int n;
	std::cout << "Please input a number: " << std::endl;
	std::cin >> n;
	std::cout << "Digital root of " << n << " is : " << digit_root(n) << std::endl;
	return 0;
}
