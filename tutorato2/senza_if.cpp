#include <iostream>

int main() {
    int input;

    std::cin >> input;

    std::cout << (((input % 2) == 0) ? input * input * input : input * input * input * input);

    return 0;
}