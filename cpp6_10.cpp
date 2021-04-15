#include <iostream>

using namespace std;

void exchangeTwoValue(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 1;
    int b = 2;
    cout << "Before exchange a,b = " << a << "," << b << endl;
    exchangeTwoValue(&a, &b);       //there '&' is address operator, not refer.
    cout << "after exchange a,b = " << a << "," << b << endl;
    return 0;
}