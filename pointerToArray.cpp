#include <iostream>

// In most expressions, the use of an array obj
// actually use a pointer to the first element of the array.

int main() {
    // like as 
    int testArr[] = {1, 2, 3, 4, 5};

    //equal int *intPtr = &testArr[0];
    int *intPtr = testArr;

    // means use auto to deduce a type(use array's identifier) is Pointer Type.
    auto autoPtr(testArr);
    std::cout << "Use Auto: " << std::endl;
    std::cout << *(autoPtr + 1) << std::endl;

    std::cout << "Use Ptr: " << std::endl;
    std::cout << *(intPtr + 1) << std::endl;

    // ptr can be used like as iterator.
    int *begarr = testArr;
    int *endarr = &testArr[5];

    std::cout << "Use iterator: " << std::endl;

    for (begarr; begarr != endarr; ++begarr) {
        std::cout << *begarr << " ";
    }

    return 0;
}