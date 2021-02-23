#include <iostream>
#include <string>
using namespace std;

int main() {
    // string can use `<<` and `>>` to read and write from the std iostream.
    // read unknown number of strings
    // string word;
    // while (cin >> word) {
    //     cout << word << endl;
    // }

    // getline (gain a whole line, not contains the \n)
    // string line;
    // while (getline(cin, line))
    //     cout << line << endl;

    // empty and size
    // size is a unsigned int, its type is std::size_type.
    // string objects are equals means that 
    // the same length and
    // contains all the same characters
    string temp;
    cin >> temp;
    if (!temp.empty() && temp == "somethings") {
        cout << "The length of this string is " << temp.size() << endl;
    }
    return 0;
}