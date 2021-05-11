#include <iostream>

class X {
  std::string name;
  double value;

public:
  X(std::istream &is = std::cin) { is >> this->name >> this->value; }
  void print(std::ostream &os = std::cout) const {
    os << "Name: " << this->name << std::endl
       << "Value: " << this->value << std::endl;
  }
};

int main() {
  X x;
  x.print();
  return 0;
}