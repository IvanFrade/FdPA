#include <iostream>

int main() {
    float a, b, c;

    std::cin >> a >> b >> c;

    a > b ? (a > c ? a = a : a = c) : (b > c ? a = b : a = c);

    std::cout << "Il massimo e' " << a << std::endl;

    return 0;
}