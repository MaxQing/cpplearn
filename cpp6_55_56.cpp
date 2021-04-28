#include <cstddef>
#include <iostream>
#include <vector>

int func_plus(const int &a, const int &b) {
	std::cout << "Plus function is running." << std::endl;
	return a + b;
}

int func_substract(const int &a, const int &b) {
	std::cout << "Substract funtion is running." << std::endl;
	return a - b;
}

int func_multiply(const int &a, const int &b) {
	std::cout << "Multiply funtion is running." << std::endl;
	return a * b;
}


int func_divide(const int &a, const int &b) {
	std::cout << "Divide funtion is running." << std::endl;
	return a / b;
}

int main() {
	int (*pf_plus)(const int&, const int&) = func_plus;
	decltype(pf_plus) pf_sub = func_substract;
	decltype(pf_plus) pf_mul = func_multiply;
	decltype(pf_plus) pf_div = func_divide;
	std::vector<decltype(pf_plus)>pf_set{pf_plus, pf_sub, pf_mul, pf_div};
	int test_a = 4;
	int test_b = 2;
	for (auto &temp : pf_set) {
		std::cout << temp(test_a, test_b) << std::endl;
	}
	return 0;
}
