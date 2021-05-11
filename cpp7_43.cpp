#include <iostream>

class NoDefault {
public:
	int val;
	NoDefault(int i) {
		val = i;
	}
};

class C {
public:
	NoDefault nd;
	C(int nd = 0) : nd(nd) { }
};

int main() {
	C c(10);
	std::cout << c.nd.val << std::endl;
	return 0;
}
