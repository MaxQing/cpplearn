#include <iostream>
#include <vector>

void printVec(std::vector<int> &para, std::ostream &os) {
	for (int i = 0; i < para.size(); ++i) {
		os << "Locality(" << i + 1 << ")'s value -> " << para[i] << std::endl;
	}
	os << std::endl;
}

int main() {
	std::vector<int> temp{1, 2 ,3};
	int n = 3;
	int t = 1;
	// default constructor.
	std::vector<int> vec1;

	// vec2 is a duplicate of vec1.
	std::vector<int> vec2(vec1);

	// same type container (especially, if the var is array, the size must be same)
	std::vector<int> vec3 = temp;

	// copy of list
	std::vector<int> vec4 = {11, 22, 33};
	std::vector<int> vec5 = {33, 22, 11};

	// init with two iterator
	std::vector<int> vec6(temp.begin(), temp.end());

	// init with (only) length.
	std::vector<int> vec7(3);

	// length  = n, each value is t.
	std::vector<int> vec8(n, t);

	printVec(vec1, std::cout);
	printVec(vec2, std::cout);
	printVec(vec3, std::cout);
	printVec(vec4, std::cout);
	printVec(vec5, std::cout);
	printVec(vec6, std::cout);
	printVec(vec7, std::cout);
	printVec(vec8, std::cout);

	return 0;
}
