#include <iostream>
#include <cassert>

//asssert is a preprocessor macro.
//assert(expr~)
//if expr is ture, assert does nothing.
//else expr writes message and terminates the program.

int main() {
	int flag_true = 1;
	int flag_false = 0;
	assert(flag_false);
	return 0;
}

