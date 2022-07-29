// To Compile STD header files: g++ -std=c++20 -fmodules-ts -c -x c++-system-header cstdio
// User header can use: -x c++-header, -x c++-user-header
// Compile with: -fmodules-ts
#include <iostream>

import Hello;

int main()
{
    std::cout << Hello::Sqr(4.0f) << "\n";
    std::cout << Hello::Abs(-1.0f) << "\n";
    return 0;
}
