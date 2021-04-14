#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    unsigned short usval = 3;
    unsigned long ulval = 4;
    int ival = 5;
    cout << "Size of unsigned short: " << sizeof(unsigned short) << endl;
    cout << "Size of unsigned long: " << sizeof(unsigned long) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << endl;
    cout << "Size of (unsigned short + int): " << sizeof(usval + ival) << endl;
    cout << "Type of (unsigned short + int): " << typeid(usval + ival).name() << endl;
    cout << "Size of (unsigned long + int): " << sizeof(ulval + ival) << endl;
    cout << "Type of (unsigned long + int): " << typeid(ulval + ival).name() << endl;
    return 0;
}