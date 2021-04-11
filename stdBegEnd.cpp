#include <iostream>

//  substract two pointer is a "ptrdiff_t" 
//  means the difference between a and b

int main() {
    int testIA[] = {1, 2, 999, 4, 5};
    int *beg = std::begin(testIA);
    int *end = std::end(testIA);
    while (beg != end && *beg != 999) {
        ++beg;
    }
    std::cout << *(beg) << std::endl;
    return 0;
}