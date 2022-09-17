#include <iostream>
#include <cmath>

double worldMostLogical(double x) {
    return (18111 / 2.0) * pow(x, 4) - 90555 * pow(x, 3) + (633885 / 2.0) * pow(x, 2) - 452773 * x + 217331;
}

int main() {
    std::cout << worldMostLogical(1) << std::endl; // 1
    std::cout << worldMostLogical(2) << std::endl; // 3
    std::cout << worldMostLogical(3) << std::endl; // 5
    std::cout << worldMostLogical(4) << std::endl; // 7
    std::cout << worldMostLogical(5) << std::endl; // 217341
}
