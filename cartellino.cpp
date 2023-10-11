// Dati in input prezzo e percentuale di sconto, stampare un "cartellino"
// con prezzo originale, percentuale di sconto e prezzo finale

#include <iostream>

int main() {
    float prezzo, sconto;

    std::cout << "Inserisci i dati:" << std::endl << std::endl;
    std::cout << "Prezzo: ";
    std::cin >> prezzo;

    while (prezzo < 0){
        std::cout << "Il prezzo non puo' essere negativo. Inserire un valore valido: ";
        std::cin >> prezzo;
    }

    std::cout << "Sconto: ";
    std::cin >> sconto;

    while (sconto < 0 || sconto > 100) {
        std::cout << "Il valore di sconto deve essere compreso tra 0 e 100. Inserire un valore valido: ";
        std::cin >> sconto;
    }

    std::cout << std::endl << "Cartellino:" << std::endl;
    std::cout << "Prezzo: " << prezzo << " euro" << std::endl;
    std::cout << "Sconto applicato: " << sconto << "%" << std::endl;
    std::cout << "Prezzo finale: " << prezzo * (1 - sconto / 100) << " euro" << std::endl;

    return 0;
}
