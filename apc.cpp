// Dato in imput un numero x, stampare area e perimetro del quadrato di lato x
// e circonferenza ed area del cerchio di raggio x

#include <iostream>

const float pi = 3.14;

int main() {
    float input;

    std::cout << "Input: ";
    std::cin >> input;

    while (input < 0) {
        std::cout << "La lunghezza deve essere positiva. Inserire un valore valido: ";
        std::cin >> input;
    }

    std::cout << "L'area del quadrato di lato " << input << " e' " << input * input << std::endl;
    std::cout << "Il perimetro del quadrato di lato " << input << " e' " << input * 4 << std::endl;
    std::cout << "La circonferenza del cerchio di raggio " << input << " e' " << 2 * pi * input << std::endl;
    std::cout << "L'area del cerchio di raggio " << input << " e' " << pi * input * input << std::endl;

    return 0;
}