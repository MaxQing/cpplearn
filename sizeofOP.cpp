#include <iostream>
#include "Sales_data.h"
using namespace std;

int main() {
    Sales_data sales, *p;
    char temp_c = 'A';
    Sales_data &refer_sales = sales;
    int arr[10];
    cout << sizeof(temp_c) << endl;
    cout << sizeof(refer_sales) << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;
    cout << sizeof(arr) / sizeof(*arr) << endl;
    return 0;
}