#include <cmath>
#include <cstdint>
#include <iostream>

int main() {
    int initialized = 5;
    std::cout << initialized << '\n';

    int initializedToZero = 0;
    std::cout << initializedToZero << '\n';

    long long big = 2147483647LL;
    big = big + 1;
    std::cout << big << '\n';

    int values[3] = {1, 2, 3};
    const int lastIndex = 2;
    std::cout << values[lastIndex] << '\n';

    std::uint16_t amount = 300;
    std::cout << amount << '\n';

    const double sum = 0.1 + 0.2;
    if (std::fabs(sum - 0.3) < 1e-12) {
        std::cout << "equal\n";
    } else {
        std::cout << "not equal\n";
    }

    return 0;
}
