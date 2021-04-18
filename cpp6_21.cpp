#include <iostream>
using namespace std;

int test_function(int integer, const int *int_pointer) {
    return integer > (*int_pointer) ? integer : (*int_pointer);
}

int main() {
    int a = 5;
    int *b = &a;
    int c = 10;
    cout << test_function(c, b) << endl;
    return 0;
}