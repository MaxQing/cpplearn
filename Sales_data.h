// header guard
// preprocess variable has two stations (defined & undefined).
// #define is able to make a id as a preprocess variable.
// #ifndef is True if and only the variable is already defined.
// then perform subsequent operations until #endif.
#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    float test = 0.0;
};

#endif