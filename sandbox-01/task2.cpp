#include <iomanip>
#include <iostream>

void show(int tenths) {
    const int totalSeconds = tenths / 10;
    const int hours = totalSeconds / 3600;
    const int minutes = (totalSeconds % 3600) / 60;
    const int seconds = totalSeconds % 60;

    std::cout << hours << ':'
              << std::setfill('0') << std::setw(2) << minutes << ':'
              << std::setw(2) << seconds << '\n';
}

int main() {
    show(3600000);
    show(36001);
    return 0;
}
