#include <iostream>
#include <typeinfo>

int main()
{
    int a = 25;
    decltype(a) b;
    std::cout << typeid(b).name() << std::endl;
    return 0;
}