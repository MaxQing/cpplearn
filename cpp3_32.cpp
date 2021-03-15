#include <iostream>
#include <vector>

using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[10];
    for (int i = 0; i < 10; ++i) {
        arr1[i] = i;
    }
    printArray(arr1, 10);
    int arr2[10];
    for (int i = 0; i < 10; ++i) {
        arr2[i] = arr1[i];
    }
    printArray(arr2, 10);
    vector<int> intVec;
    for (int i = 0; i < 10; ++i) {
        intVec.push_back(i);
    }
    for (int i = 0; i < 10; ++i) {
        cout << intVec[i] << " ";
    }
    cout << endl;
    return 0;
}