#include <iostream>

std::string make_plural(size_t ctr, const std::string &word,
                        const std::string &ending = "s") {
  return (ctr > 1) ? word + ending : word;
}

int main() {
  size_t fal = 2;
  size_t suc = 1;
  std::cout << make_plural(suc, "success") << std::endl;
  std::cout << make_plural(fal, "failure") << std::endl;
  return 0;
}