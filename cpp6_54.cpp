#include <iostream>
#include <vector>

using namespace std;

int fct_test(int &a, int &b) {
	return (a + b) * a;
}

int main() {
	int testVa = 1;
	int testVb = 2;
	int result = 0;
	vector<int(*)(int&, int&)>pf_set;
	int (*test_pf)(int&, int&);
	int (*another_pf)(int&, int&);
	test_pf = fct_test;
	pf_set.push_back(test_pf);
	result = pf_set[0](testVa, testVb);
	cout << "RESULT IS " << result << endl;
	return 0;
}
