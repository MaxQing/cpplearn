#include <iostream>

int main()
{
    // the reference likes as alias.
    // and must be init.
    // the reference isn't a object.
    // before init, the reference can't bind another value.
    int a = 25;
    int b = 20;
    int &r = a;
    r = b;
    std::cout << "original object: " << a << std::endl;
    std::cout << "The reference to origin: " << r << std::endl;

    // the type of pointer must strictly match the type of object it refers to.
    double dvalue = 3.1415926;
    double *dp = &dvalue;
    // this writing will export errors.
    // int *dp = &dvalue;

    // the dereferencing (especilly available pointer)
    double temp = *dp;
    std::cout << "The value of dereferecing: " << temp << std::endl;

    // null pointer
    // two ways to init null pointer
    int *np_1 = nullptr;
    int *np_2 = 0;
    return 0;
}