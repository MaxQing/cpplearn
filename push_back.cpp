#include<iostream>
#include<vector>

using namespace std;

int main() {
    // push_back can push a element to the back of the vector.
    /*
        if the loop body contains statements that add elements to the vector,
        cann't use the range for loop.
    */
    vector<int> ivec;
    for (int i = 0; i <= 10; ++i) {
        ivec.push_back(i);
    }
    cout << "The vector's content is : " << endl;
    for (int temp : ivec) {
        cout << temp << " ";
    }
    cout << endl;
    cout << "And the vector's length is : " << ivec.size() << endl;
    return 0;
}