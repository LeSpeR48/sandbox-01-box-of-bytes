#include <cstdint>
#include <iostream>
#include <limits>

std::int16_t saturate(int value) {
    if (value > std::numeric_limits<std::int16_t>::max()) {
        return std::numeric_limits<std::int16_t>::max();
    }
    if (value < std::numeric_limits<std::int16_t>::min()) {
        return std::numeric_limits<std::int16_t>::min();
    }
    return static_cast<std::int16_t>(value);
}

int main() {
    std::cout << saturate(40000) << ' '
              << saturate(-40000) << ' '
              << saturate(100) << '\n';
    return 0;
}
