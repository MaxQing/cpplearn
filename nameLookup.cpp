#include <iostream>

typedef double Money;

std::string bal = "test";

class Account {
public:
  Money balance() { return bal; }

private:
  Money bal = 2.2;
};

int main() {
  Account ac;
  std::cout << ac.balance() << std::endl;
  return 0;
}