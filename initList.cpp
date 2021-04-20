#include <iostream>
#include <initializer_list>
#include <vector>

using namespace std;

std::vector<string> error_msg(initializer_list<string> ls, int errorCode) {
    return {ls};
}

int main() {
    int errorCode = 1234;
    for (auto temp : error_msg({"wuhu1", "wuhu2"}, errorCode)) {
        std::cout << temp << " ";
    }
    std::cout << std::endl;
    return 0;
}