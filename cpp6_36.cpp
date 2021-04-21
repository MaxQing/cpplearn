#include <iostream>

std::string odd[4] = {"one", "three", "five", "seven"};
std::string even[4] = {"two", "four", "six", "eight"};

std::string (&func(int i))[4];

auto func_tail(int i) -> std::string (*)[10];

decltype(odd) *func_decltype(int i);

int main() {}