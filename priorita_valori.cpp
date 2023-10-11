// Esercizio su espressioni booleane e side effect

#include <iostream>

int main() {
    int x = 1, y = 1;
    bool b = (++x == ++y) || (++x != y++);

    std::cout << b << " " << x << " " << y << std::endl;

    return 0;
}