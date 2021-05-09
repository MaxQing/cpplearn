// header guard
// preprocess variable has two stations (defined & undefined).
// #define is able to make a id as a preprocess variable.
// #ifndef is True if and only the variable is already defined.
// then perform subsequent operations until #endif.
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
struct Sales_data {
  Sales_data() = default;
  Sales_data(const std::string &s) : bookNo(s) {}
  Sales_data(const std::string &s, unsigned n, double p)
      : bookNo(s), unites_sold(n), revenue(n * p) {}
  Sales_data(std::istream &);

  std::string isbn() const { return bookNo; }
  Sales_data &combine(const Sales_data &);
  double avg_price() const;
  std::string bookNo;
  unsigned unites_sold = 0;
  double revenue = 0.0;
};

Sales_data add(const Sales_data &, const Sales_data &);
std::ostream &print(std::ostream &, const Sales_data &);
std::istream &read(std::istream &, Sales_data &);
#endif
