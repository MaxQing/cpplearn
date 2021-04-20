#include <iostream>

bool str_subrange(const std::string &str1, const std::string &str2) {
  if (str1.size() == str2.size()) {
    return str1 == str2;
  }
  auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
  for (decltype(size) i = 0; i != size; ++i) {
    if (str1[i] != str2[i]) {
      return;
    }
  }
}

int main() {}

// this error message is
// "Non-void function should return a value."
// compiler is Clang11.