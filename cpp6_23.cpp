#include <iostream>
using namespace std;

void print(const int &para) {
    cout << para << endl;
}

void print(const int *beg, const int *end) {
    while (beg != end) {
        cout << *beg++ << endl;
    }
}

void print(const int *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        cout << arr[i] << endl;
    }
}

void print(const int (&arr)[2]) {
    for (auto elem : arr) {
        cout << elem << endl;
    }
}

void print(const int ia[10]) {
    for (size_t i = 0; i != 10; ++i) {
        cout << ia[i] << endl;
    }
}

int main() {
    int i = 0, j[2] = {0, 1};
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print(i);
    print(begin(j), end(j));
    print(j, 2);
    print(j);
    print(ia);
    return 0;
}