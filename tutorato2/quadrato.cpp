#include <iostream>

int main() {
    float lato;

    std::cout << "Inserisci la lunghezza del lato: " << std::endl;
    std::cin >> lato;

    std::cout << "L'area del quadrato di lato " << lato << " e' " << lato * lato << std::endl;

    return 0;
}