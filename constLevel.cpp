#include <iostream>

int main()
{
    // top-level const says that a variable is a const variable.
    const int a = 25;
    int b = 20;

    // low-level const (es pointer)
    // the pointer to a const.
    const int *p = &a;

    // the top-level variable must match the top-level variable

    // this is wrong.(because the normal pointer can't refer to a const variable.)
    // int *normal_p = &a;

    // top-level const pointer (const pointer)
    int *const cp = &b;
    std::cout << "the original value of b: " << b << std::endl;

    // const pointer can use dereferencing to update the value that was refered.
    *cp = 33;
    std::cout << "const pointer Update the value of b: " << b << std::endl;

    return 0;
}