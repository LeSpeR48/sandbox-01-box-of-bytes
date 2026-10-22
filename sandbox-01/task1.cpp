#include <cstdint>
#include <iostream>

int main() {
    std::uint16_t odometer = 65000;
    int kilometers = 0;

    while (odometer != 0) {
        ++odometer;
        ++kilometers;
    }

    std::cout << kilometers << '\n';
    return 0;
}
