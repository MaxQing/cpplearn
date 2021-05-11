#include <iostream>

class Test {
	std::string name;
public:
	explicit Test(const std::string &name) : name(name) { }
	std::string getName() const { return this->name; }
	Test &combine(const Test &item) {
		this->name += item.getName();
		return *this;
	}
};

std::ostream &print(std::ostream &os, const Test &item) {
	os << "Name: " << item.getName() << std::endl;
	return os;
}

int main() {
	Test test("myService");
	test.combine(std::string(" is best."));
	print(std::cout, test);
	return 0;
}
