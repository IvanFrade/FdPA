// Chiedere in input un numero, se pari stamparne il quadrato, altrimenti stamparne il cubo

#include <iostream>

int main() {
    int input;

    std::cout << "Inserisci un numero: ";
    std::cin >> input;

    std::cout << (input % 2 == 0 ? input * input : input * input * input);

    return 0;
}