#include <iostream>

//recursive function easily leads to stack overflow.

using namespace std;

long factorial(long i) {
    if (i != 1) {       //i doesn't equal 1 -> recursive case
        return i * factorial(i - 1);
    }
    return 1;       // i equals 1 -> base case
}

int main() {
    int i = 4;
    cout << "The factorial of " << i << " is " << factorial(i) << endl;
    return 0;
}