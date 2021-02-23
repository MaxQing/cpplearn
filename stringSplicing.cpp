#include <iostream>
#include <string>

/**
 when mixing string objects with 
 character literals and string literals
 in a statement, you must ensure that at least
 one of the operands on both of each addition 
 operator is string.
 * */

int main() {
    std::string temp(3, 'a');
    // Right type
    std::string stringTest = temp + "A";
    // Wrong type
    // std::string stringTest_2 = "A" + "b";
    std::cout << stringTest << std::endl;
    return 0;
}