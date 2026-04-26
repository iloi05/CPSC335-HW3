/* Name: Ivy Loi
Date: 4/24/2026
Homework 3, problem 4
CPSC 335 section 10
*/
#include <iostream>
#include <tuple>
#include <optional>

std::optional<std::tuple<int, int, int>> triplePi(int a, int b) {
// Iterate through all possible combinations of x, y, z in the range [a, b)
    for (int x = a; x < b; ++x) {
        for (int y = a; y < b; ++y) {
            for (int z = a; z < b; ++z) {
// Check if the sum of squares equals 3
                if (x * x + y * y + z * z == 3) {
// If we find such a triple, return it as a tuple
                    return std::make_tuple(x, y, z);
                }
            }
        }
    }
    return std::nullopt;
}

int main() {
    int a = 0, b = 2;
    auto result = triplePi(a, b);
    
    if (result) {
        auto [x, y, z] = *result;
        std::cout << "Found triple: (" << x << ", " << y << ", " << z << ")"
                  << std::endl;
    } else {
        std::cout << "No triple found in the range [" << a << ", " << b << ")"
                  << std::endl;
    }

    int c = 20, d = 50;
    auto result2 = triplePi(c, d);
    if (result2) {
        auto [x, y, z] = *result2;
        std::cout << "Found triple: (" << x << ", " << y << ", " << z << ")"
                  << std::endl;
    } else {
        std::cout << "No triple found in the range [" << c << ", " << d << ")"
                  << std::endl;
    }
    
    return 0;
}