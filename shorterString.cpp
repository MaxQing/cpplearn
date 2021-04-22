#include <iostream>

const std::string &shorterString(const std::string &s1, const std::string &s2) {
  std::cout << "CONST TYPE." << std::endl;
  return s1.size() <= s2.size() ? s1 : s2;
}

// overload function
// when arguments aren't const string, it will return a common reference to
// string.
std::string &shorterString(std::string &s1, std::string &s2) {
  std::cout << "COMMON TYPE." << std::endl;
  auto &temp = shorterString(const_cast<const std::string &>(s1),
                             const_cast<const std::string &>(s2));
  return const_cast<std::string &>(temp);
}

int main() {
  std::string argu_1 = "test short";
  std::string argu_2 = "test common";
  shorterString(argu_1, argu_2);
  shorterString("safjkl", "asdlf");
  return 0;
}