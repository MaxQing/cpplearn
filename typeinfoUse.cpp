#include <iostream>
#include <typeinfo>

int main()
{
    int a = 25;
    decltype(a) b;
    int *p = &a;

    // if decltype uses a variable, it will return the type of the variable
    // (es reference and top-level const).

    decltype((a)) c = a;
    double d = 30.23;
    double *dp_ori = &d;
    decltype(*dp_ori) dp = d;

    std::cout << typeid(b).name() << std::endl;
    std::cout << typeid(c).name() << std::endl;
    std::cout << typeid(d).name() << std::endl;
    return 0;
}