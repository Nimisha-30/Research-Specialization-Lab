#include <iostream>

int main() {
    float m, n;
    std::cout << "Enter first number: ";
    std::cin >> m;
    std::cout << "Enter second number: ";
    std::cin >> n;
    std::cout << "Sum: " << m + n << std::endl;
    std::cout << "Difference: " << m - n << std::endl;
    std::cout << "Product: " << m * n << std::endl;
    std::cout << "Quotient: " << m / n << std::endl;
    return 0;
}
