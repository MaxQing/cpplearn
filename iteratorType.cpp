#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>

using namespace std;

// standard library uses iterator and const_iterator to express the iterator's type.

int main() {
    // make it_intVec can read and write to the vector<int>.
    // vector<int>::iterator it_intVec;

    // same
    // string::iterator it_String

    vector<int> tempInt(10);
    for (int i = 0; i < 11; ++i) {
        tempInt.push_back(i);
    }
    
    cout << typeid(tempInt.begin()).name() << endl;

    return 0;

}