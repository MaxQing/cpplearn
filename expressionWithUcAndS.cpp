#include <iostream>

int main()
{
    // if a expression has int and unsigned,
    // int's value will be converted to unsigned.
    int a = -1;
    unsigned b = 1;
    std::cout << "(a * b).value"
              << "->"
              << "value(" << a * b << ")" << std::endl;
    return 0;
}