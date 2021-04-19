#include <iostream>
#include <initializer_list>

using namespace std;

void error_msg(initializer_list<string> ls, int errorCode) {
    for (auto beg = ls.begin(); beg != ls.end(); ++beg) {
        cout << *beg << " ";
    }
    cout << endl;
    cout << "Error Code is: " << errorCode << endl;
}

int main() {
    int errorCode = 1234;
    error_msg({"message1", "message2", "message3"}, errorCode);
    return 0;
}