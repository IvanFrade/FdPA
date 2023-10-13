/*
   Cifrario di Cesare
   Leggere 3 char da tastiera, stampare 3 char corrispettivi shiftati 3 posizioni avanti
   Validi solo caratteri alfabetici minuscoli (26), tutti gli altri diventano *
   Riporto (x diventa a, ecc.)

   Usare solo: dichiarazione, assegnazione, if-else, operatore ternario 
   I caratteri minuscoli vanno da 97 (a) a 122 (z)
*/

#include <iostream>

const int offset = 97; // Inizio caratteri considerati
const int length = 26; // Numero caratteri considerati -
const int shift = 3;   // Numero di caratteri scalati nella codifica

int main() {
    char c1, c2, c3; // Caratteri in input

    std::cout << "Inserire tre caratteri: " << std::endl;

    std::cin >> c1;
    std::cin >> c2;
    std::cin >> c3;

    (c1 >= offset && c1 <= offset + length - 1) ? c1 = offset + ((c1 + shift - offset) % length) : c1 = '*';
    (c2 >= offset && c2 <= offset + length - 1) ? c2 = offset + ((c2 + shift - offset) % length) : c2 = '*';
    (c3 >= offset && c3 <= offset + length - 1) ? c3 = offset + ((c3 + shift - offset) % length) : c3 = '*';
    
    std::cout << "Cifrario di Cesare: ";
    std::cout << c1 << ' ' << c2 << ' ' << c3 << ' ' << std::endl;
    
    return 0;
}