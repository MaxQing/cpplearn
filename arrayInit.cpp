#include <iostream>

// array's declaration likes as "a[b]".
// b is dimension, must be a const expression.
// can't use "auto" to deduce type.
// can't use a array's content to copy to another array as init.
// can't use a array to assign to another array.

int main() {
    constexpr int dimension = 10;
    int a[dimension];
    for (int i = 0; i < 11; ++i) {
        a[i] = i;
    }
    for (auto temp : a) {
        std::cout << temp << " ";
    }
    std::cout << std::endl;
    return 0;
}