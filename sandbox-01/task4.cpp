#include <cmath>
#include <iostream>

int celsius(int f) {
    const double value = (f - 32) * 5.0 / 9.0;
    return static_cast<int>(std::lround(value));
}

int main() {
    std::cout << celsius(100) << ' '
              << celsius(0) << ' '
              << celsius(212) << '\n';
    return 0;
}
