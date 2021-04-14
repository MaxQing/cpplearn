#include <iostream>
#include <vector>

using namespace std;

void printIntVec(vector<int> ivec) {
    for (auto temp : ivec) {
        cout << temp << " ";
    }
    cout << endl;
}

int main() {
    vector<int> ivec;
    for (int i = 0; i < 11; ++i) {
        ivec.push_back(i);
    }
    cout << "Original Value: " << endl;
    printIntVec(ivec);
    for (auto &temp : ivec) {
        if (temp % 2 != 0) {
            temp *= 2;
        }
    }
    cout << "Change Value: " << endl;
    printIntVec(ivec);
    return 0;
}