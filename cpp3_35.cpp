#include <iostream>

void printArr(int a[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    std::cout << "Original Array's elements: " << std::endl;
    printArr(arr, 5);
    for (int i = 0; i < 5; ++i) {
        *(p + i) = 0;
    }
    std::cout << "Use pointer to make Array's elments be zero: " << std::endl;
    printArr(arr, 5);
    return 0;
}