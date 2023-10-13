#include <iostream>

int main() {
    float lunghezza;

    std::cout << "Inserisci la lunghezza in pollici: ";
    std::cin >> lunghezza;

    std::cout << "L'equivalente in centimetri e' " << lunghezza * 2.54 << std::endl;

    return 0;
}