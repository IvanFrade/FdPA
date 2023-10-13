#include <iostream>

int main() {
    float temperatura;

    std::cout << "Inserisci la temperatura in Celsius: ";
    std::cin >> temperatura;

    std::cout << "L'equivalente in Kelvin e' " << temperatura + 273.15 << std::endl;

    return 0;
}