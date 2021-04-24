#include <iostream>

constexpr int new_sz() { return 42; }

int main() {
  std::cout << new_sz() << std::endl;
  return 0;
}