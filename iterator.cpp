#include <iostream>
#include <string>
#include <vector>

using namespace std;

// begin -> to the first element.
// end -> one past the end.

int main() {
    string s("some strings.");
    if (s.begin() != s.end()) {
        auto it = s.begin();
        *it = toupper(*it);
    }
    cout << s << endl;

    for (auto it = s.begin(); it != s.end() && !isspace(*(it)); ++it) {
        *it = toupper(*it);
    }
    cout << s << endl;
    
    return 0;
}