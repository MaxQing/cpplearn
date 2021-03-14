#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    /*
    iter + n -> iterator added a int is a iterator, especially new position moved n. (ahead)
    iter - n -> result is also a iterator, moved n. (back)
    iter1 - iter2 -> result is difference between 1 and 2.
    iter1 + iter2 -> Undefined Behavior.
    */
    // like as binary search:
    vector<int> text;
    int sought = 5;
    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + (end - beg) / 2;
    while (mid != end && *mid != sought) {
        if (sought < *mid) {
            end = mid;
        }
        else {
            beg = mid + 1;
        }
        mid = beg + (end - beg) / 2;
    }
    return 0;
}