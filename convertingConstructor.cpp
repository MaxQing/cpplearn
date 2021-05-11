#include <iostream>

class Test {
	std::string name;
	int value;
public:
	Test(const std::string &name, int value = 10) : name(name), value(value) { }
	int getValue() const { return this->value; }
	std::string getName() const { return this->name; }
	Test &combine(const Test &item) {
		this->value += item.getValue();
		return *this;
	}
	friend std::ostream &print(std::ostream &os, const Test &item) {
		os << "Name: " << item.getName() << std::endl;
		os << "Value: " << item.getValue() << std::endl;
		return os;
	}
};

int main() {
	std::string temp = "MyClass";
	Test origin("original", 10);
	origin.combine(temp);
	print(std::cout, origin);
	return 0;
}
