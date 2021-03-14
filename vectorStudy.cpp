#include <iostream>
#include <vector>
#include "Sales_data.h"

using namespace std;

// The standard library type Vector
// represents a collection of objects
// all objects are of the same type

// round brackets -> construct Vector obj.
// square brackets -> list init Vector obj.

int main() {
    vector<int> intVec(10, 2);
    vector<Sales_data> salesVec;
    vector<string> stringVec = {"This", "is", "a", "FW."};
    vector<string> svec(10, "null");
    for (string temp : stringVec) {
        cout << temp << endl;
    }
    for (int temp : intVec) {
        cout << temp << " ";
    }
    for (string temp : svec) {
        cout << temp << " ";
    }
    return 0; 
}