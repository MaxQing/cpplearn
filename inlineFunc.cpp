#include <iostream>

inline const std::string &shorterString(const std::string &s1,
                                        const std::string &s2) {
  return s1.size() <= s2.size() ? s1 : s2;
}

int main() {
  std::cout << shorterString("longer", "short") << std::endl;
  //   std::cout << (s1.size() < s2.size() ? s1 : s2) << std::endl;
  return 0;
}