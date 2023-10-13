#include <iostream>

int main() {
    int x, y;

    std::cout << "Inserisci due numeri: " << std::endl;
    std::cin >> x >> y;

    std::cout << "Stampa in ordine inverso: " << std::endl;
    std::cout << y << ' ' << x << std::endl;

    std::cout << "Scambio contenuto variabli: " << std::endl;

    int temp = x;
    x = y;
    y = temp;
    std::cout << x << ' ' << y << std::endl;

    return 0;
}