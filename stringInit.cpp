#include <iostream>
#include <string>

int main() {
    std::string s1; // default init. s1 is a void string.
    std::string s2; // s2 is a copy of s1. (copy initialization)
    std::string s3 = "hiya"; // s3 is a copy of a literal.
    std::string s4(10, 'c'); // the content of s4 is 'ccccccccccc'. (direct initialization)

    std::cout << "s1.value -> " << s1 << std::endl;
    std::cout << "s2.value -> " << s2 << std::endl;
    std::cout << "s3.value -> " << s3 << std::endl;
    std::cout << "s4.value -> " << s4 << std::endl;
    
    return 0;
}