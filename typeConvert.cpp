#include <iostream>

int main()
{
    bool b = 22;
    float f = 2.2f;
    unsigned char un_c = 65;
    signed char s_c = 255;
    // boolean -> int
    int i = b;
    std::cout << "boolean.value(" << b << ")"
              << "->"
              << "int.value(" << i << ")" << std::endl;
    // float -> int (Zero truncation)
    i = f;
    std::cout << "float.value(" << f << ")"
              << "->"
              << "int.value(" << i << ")" << std::endl;
    // signed int -> unsigned char(base sizeof char and ASCII)
    std::cout << "-1.value"
              << "->"
              << "unsigned char.value(" << un_c << ")" << std::endl;

    return 0;
}