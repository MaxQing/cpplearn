#include "Sales_data.h"

double Sales_data::avg_price() const { return revenue / unites_sold; }

Sales_data &Sales_data::combine(const Sales_data &item) {
	this->revenue += item.revenue;
	this->unites_sold += item.unites_sold;
	return *this;
}

std::ostream &print(std::ostream &os, const Sales_data &item) {
	os << item.bookNo << " " << item.unites_sold << " "
		<< item.revenue << std::endl;
	return os;
}

std::istream &read(std::istream &is, Sales_data &item) {
	std::string isbn;
	unsigned n;
	double revenue;
	is >> isbn >> n >> revenue;
	item.setIsbn(isbn);
	item.setUnit(n);
	item.setRevenue(revenue);
	return is;
}

Sales_data::Sales_data(std::istream &is) {
	read(std::cin, *this);
}
