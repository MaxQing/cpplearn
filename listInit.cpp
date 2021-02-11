#include <iostream>

int main()
{
    long double temp = 3.1415926;
    // int a{temp}; this is wrong. because the data will be dropped.
    int b(temp);
    std::cout << b << std::endl;
    return 0;
}