#include <iostream>
#include <tuple>
#include <optional>

std::optional<std::tuple<int, int, int>> triplePi(int a, int b) {
    for (int x = a; x < b; ++x) {
        for (int y = a; y < b; ++y) {
            for (int z = a; z < b; ++z) {
                if (x * x + y * y + z * z == 3) {
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
        std::cout << "Found triple: (" << x << ", " << y << ", " << z << ")\n";
    } else {
        std::cout << "No triple found in the range [" << a << ", " << b << ")\n";
    }

    int c = 20, d = 50;
    auto result2 = triplePi(c, d);
    if (result2) {
        auto [x, y, z] = *result2;
        std::cout << "Found triple: (" << x << ", " << y << ", " << z << ")\n";
    } else {
        std::cout << "No triple found in the range [" << c << ", " << d << ")\n";
    }
    
    return 0;
}