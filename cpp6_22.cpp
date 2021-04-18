#include <iostream>
using namespace std;

void switch_pointer(const int *&a, const int *&b) {
    const int *temp = a;
    cout << "Before switching, (a, b) = " << "(" << a << ", " << b << ")" << endl;
    a = b;
    b = temp;
    cout << "After switching, (a, b) = " << "(" << a << ", " << b << ")" << endl;
}

int main() {
    int temp = 1;
    int temp_2 = 2;
    const int *a = &temp;
    const int *b = &temp_2;
    switch_pointer(a, b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}