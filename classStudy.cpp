#include "Sales_data.h"
#include <iostream>
#include <vector>

double Sales_data::avg_price() const {
  if (unites_sold) {
    return revenue / unites_sold;
  } else
    return 0;
}

Sales_data &Sales_data::combine(const Sales_data &rhs) {
  unites_sold += rhs.unites_sold;
  revenue = rhs.revenue;
  return *this;
}

std::istream &read(std::istream &is, Sales_data &item) {
  double price = 0;
  is >> item.bookNo >> item.unites_sold >> price;
  item.revenue = item.unites_sold * price;
  return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item) {
  os << item.isbn() << " " << item.unites_sold << " " << item.revenue << " "
     << item.avg_price();
  return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
  Sales_data sum = lhs;
  sum.combine(rhs);
  return sum;
}

Sales_data::Sales_data(std::istream &is) { read(is, *this); }

// constructor controls the initialization of class type.
int main() {
  // default constructor(no arguments)
  // if we don't explicitly define any constructor -> synthesized default
  // constructor synthesized default constructor is created by compiler.
  //   some ways to initialize a Sales_data class type.
  // default constructor
  Sales_data test_1;
  // constructor initialize list
  Sales_data test_2("21349085");
  Sales_data test_3("23142152", 10, 32.00);
  Sales_data test_4(std::cin);
  std::vector<Sales_data> svec;
  svec.push_back(test_1);
  svec.push_back(test_2);
  svec.push_back(test_3);
  svec.push_back(test_4);
  for (int i = 0; i < svec.size(); ++i) {
    print(std::cout, svec[i]);
    std::cout << std::endl;
  }
  return 0;
}
