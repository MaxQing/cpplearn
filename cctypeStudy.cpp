#include <iostream>
#include <cctype>

/*
in particular, the name defined in the cname
belongs to the namespace std;
*/

int main() {
    std::string test;
    std::cout << "Please input a string, it will be upper." << std::endl;
    std::cin >> test;
    for (char &temp : test) {
        if (std::islower(temp)) {
            temp = std::toupper(temp);
        }
    }
    std::cout << test << std::endl;
    return 0;
}