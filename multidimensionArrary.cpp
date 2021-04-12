#include <iostream>

void traverse_array(int ia[][4], int length) {
    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << "element's value: " << ia[i][j] << std::endl;
            std::cout << "element's position: " << i << ", " << j << std::endl;
            std::cout << std::endl;
        }
    }
}

int main() {
    constexpr int length = 3;
    constexpr int width = 4;

    int ia[length][width] = {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8},
        {8, 9, 10, 11}
    };
    // this format is concise.
    for (auto &row : ia) {
        for (auto &col : row) {
            col += 1;
        }
    }
    traverse_array(ia, 3);

    return 0;
}