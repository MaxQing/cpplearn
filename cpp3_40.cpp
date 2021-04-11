#include <iostream>
#include <cstring>

int main() {
    char s1[] = "condense ";
    char s2[] = "composite ";
    char s3[] = "and ";
    char s4[100] = {};
    strcat(s1, s3);
    strcat(s1, s2);
    strcpy(s4, s1);
    std::cout << s1 << std::endl;
    std::cout << s4 << std::endl;
    return 0;
    
}