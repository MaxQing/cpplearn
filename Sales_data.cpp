#include <iostream>
#include "Sales_data.h"

int main() {
    Sales_data data_1, data_2;
    double price = 0;
    
    // read the first transaction
    std::cin >> data_1.bookNo >> data_1.units_sold >> price;

    // calculate the sum income
    data_1.revenue = data_1.units_sold * price;

    // next transaction similarly
    std::cin >> data_2.bookNo >> data_2.units_sold >> price;
    data_2.revenue = data_2.units_sold * price;

    // check the ISBN
    if (data_1.bookNo == data_2.bookNo) {
        unsigned totalCnt = data_1.units_sold + data_2.units_sold;
        double totalRevenue = data_1.revenue + data_2.revenue;
        std::cout << data_1.bookNo << " " << totalCnt
                  << " " << totalRevenue << " ";
        if (totalCnt != 0)
            std::cout << totalRevenue / totalCnt << std::endl;
        else
            std::cout << "(no sales)" << std::endl;
        return 0;
    }
    else {
        std::cerr << "Data must refer to the same ISBN." << std::endl;
        return -1;
    }

}