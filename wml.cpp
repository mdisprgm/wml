#include <iostream>
#include <cmath>

double world_most_logical(double x) {
    return (18111 / 2.0) * pow(x, 4) - 90555 * pow(x, 3) + (633885 / 2.0) * pow(x, 2) - 452773 * x + 217331;
}

int main() {
    std::cout << world_most_logical(1) << std::endl; // 1
    std::cout << world_most_logical(2) << std::endl; // 3
    std::cout << world_most_logical(3) << std::endl; // 5
    std::cout << world_most_logical(4) << std::endl; // 7
    std::cout << world_most_logical(5) << std::endl; // 217341
}
