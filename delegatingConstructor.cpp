#include <iostream>

class Sales_data {
  friend std::istream &read(std::istream &is, Sales_data &item);
  friend std::ostream &print(std::ostream &os, const Sales_data &item);

public:
  // delegating constructor
  Sales_data(const std::string &book, unsigned num, double sellp, double salep)
      : bookNo(book), unites_sold(num), sellingprice(sellp), saleprice(salep) {
    if (sellingprice) {
      discount = saleprice / sellingprice;
    }
    std::cout << "All arguments." << std::endl;
  }
  Sales_data() : Sales_data("", 0, 0, 0) {
    std::cout << "No arguments" << std::endl;
  }
  Sales_data(const std::string &book) : Sales_data(book, 0, 0, 0) {
    std::cout << "Only BookNo." << std::endl;
  }
  Sales_data(std::istream &is) : Sales_data() {
    read(is, *this);
    std::cout << "User input." << std::endl;
  }

private:
  std::string bookNo;
  unsigned unites_sold = 0;
  double sellingprice = 0.0;
  double saleprice = 0.0;
  double discount = 0.0;
};

std::istream &read(std::istream &is, Sales_data &item) {
  is >> item.bookNo >> item.unites_sold >> item.sellingprice >> item.saleprice;
  return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item) {
  os << item.bookNo << " " << item.unites_sold << " " << item.sellingprice
     << " " << item.saleprice << " " << item.discount << std::endl;
  return os;
}

int main() {
  Sales_data fist("978-7-121-15535-2", 85, 128, 129);
  Sales_data second;
  Sales_data third("999-2-133-14454-2");
  Sales_data last(std::cin);
  return 0;
}