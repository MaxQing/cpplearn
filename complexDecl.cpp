#include <iostream>

// Some complex declarations as array.

int main() {
    // a array contains 10 pointers to int.
    // actually it is a array.
    int *ptr[10];

    int arr[10];

    for (int i = 0; i < 10; ++i) {
        arr[i] = i;
    }

    // a pointer to a array contains 10 ints.
    // actually it is a pointer.
    int (*ptrToArray)[10] = &arr;

    // a refer to a array.
    // actually it is a reference.
    int (&arrRef)[10] = arr;

    std::cout << "arrRef's: " << std::endl;

    for (int i = 0; i < 10; ++i) {
        std::cout << arrRef[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "pointer to array: " << std::endl;

    for (int i = 0; i < 10; ++i) {
        std::cout << *(ptrToArray + i) << " ";
    }    

    std::cout << std::endl;

    return 0;
}