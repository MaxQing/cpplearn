#include <iostream>

class Account {
	std::string owner;
	double amount;
	static double interestRate;
	static double initRate();
public:
	void calculate() { amount += amount * interestRate; }
	static double rate() { return interestRate; }
	static void rate(double);
};

int main() {
	double r;
	r = Account::rate();
	std::cout << r << std::endl;
	return 0;
}
