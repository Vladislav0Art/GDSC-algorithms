#include <iostream>
#include <cassert>


int main() {
    // cppreference: https://en.cppreference.com/w/cpp/language/types

    // chars >= 1
    assert(sizeof(/*signed*/ char) == 1);
    assert(sizeof(unsigned char) == 1);
    std::cout << "sizeof(char)=" << sizeof(char) << "\n";

    // short >= 2
    assert(sizeof(/*signed*/ short /*int*/) == 2);
    assert(sizeof(unsigned short) == 2);
    std::cout << "sizeof(short)=" << sizeof(short) << "\n";

    // int >= 2
    assert(sizeof(/*signed*/ int) == 4);
    assert(sizeof(unsigned int) == 4);
    std::cout << "sizeof(int)=" << sizeof(int) << "\n";

    // long >= 4
    assert(sizeof(long /*int*/) == 4);
    assert(sizeof(unsigned long /*int*/) == 4);
    std::cout << "sizeof(long)=" << sizeof(long) << "\n";

    // long long >= 8
    assert(sizeof(long long /*int*/) == 8);
    assert(sizeof(unsigned long long /*int*/) == 8);
    std::cout << "sizeof(long long)=" << sizeof(long long) << "\n";

    // float
    assert(sizeof(float) == 4);
    std::cout << "sizeof(float)=" << sizeof(float) << "\n";

    // (long) double
    assert(sizeof(double) == 8);
    std::cout << "sizeof(double)=" << sizeof(double) << "\n";
    assert(sizeof(long double) == 16);
    std::cout << "sizeof(long double)=" << sizeof(long double) << "\n";

    return 0;
}