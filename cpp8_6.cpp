#include "Sales_data.h"
#include "./Sale_data.cpp"
#include <fstream>

int main(int argc, char *argv[]) {
	if (argc != 3) {
		std::cerr << "Lack file name." << std::endl;
		return -1;
	}
	std::ifstream ifs(argv[1]);
	std::ofstream ofs(argv[2]);
	if (!ifs) {
		std::cerr << "File not exists." << std::endl;
	}
	if (!ofs) {
		std::cerr << "File not exists." << std::endl;
	}
	Sales_data total;
	if (read(ifs, total)) {
		Sales_data trans;
		while (read(ifs, trans)) {
			if (total.isbn() == trans.isbn()) {
				total.combine(trans);
			}
			else {
				print(ofs, trans);
				total = trans;
			}
		}
		print(ofs, total);
	}
	else {
		std::cerr << "No data." << std::endl;
	}
	return 0;
}
