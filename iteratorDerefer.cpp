#include <iostream>
#include <vector>
#include <string>

using namespace std;

// -> expression combines "access" and "dereference".

int main() {
    vector<string> stringVec = {"Yoyoyo", "Yaobaiyang"};
    for (auto it = stringVec.begin(); it != stringVec.end(); ++it) {
        if (it->size() == 6) {
            cout << *it << endl;
        } 
    }
    return 0;
}