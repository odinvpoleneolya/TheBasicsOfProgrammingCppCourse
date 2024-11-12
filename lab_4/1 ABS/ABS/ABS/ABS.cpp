#include <iostream>
#include <cmath>

int main() {
    double X;
    std::cout << "Enter valid number X: ";
    std::cin >> X;

    double absX = std::abs(X);

    std::cout << "| " << X << " | = " << absX << std::endl;

    return 0;
}
