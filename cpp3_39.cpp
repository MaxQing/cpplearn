#include <iostream>
#include <cstring>

int main() {
    std::string s1 = "compliment";
    std::string s2 = "compensate";
    const char s3[] = "component";
    const char s4[] = "complement";
    std::cout << "Comparing strings in cpp: " << std::endl;
    std::cout << (s1 == s2) << std::endl;
    std::cout << "Comparing strings in c: " << std::endl;
    std::cout << strcmp(s3, s4) << std::endl;
    return 0;
}