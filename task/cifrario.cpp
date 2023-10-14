/*
   Cifrario di Cesare
   Leggere 3 char da tastiera, stampare 3 char corrispettivi shiftati 3 posizioni avanti
   Validi solo caratteri alfabetici minuscoli (26), tutti gli altri diventano *
   Attenzione al riporto (x diventa a, y diventa b ecc.)

   Usare solo: dichiarazione, assegnazione, if-else, forse operatore ternario?
   Nella codifica ASCII i caratteri minuscoli vanno da 97 (a) a 122 (z)
*/

#include <iostream>

using namespace std;

int main() {
    char c1, c2, c3; // Caratteri in input

    cout << "Inserire tre caratteri: " << endl;
    cin >> c1 >> c2 >> c3;
    
    // Se il carattere in input è compreso tra 'a' e 'z' lo shifto di 3, altrimenti lo setto a '*'
    (c1 >= 'a' && c1 <= 'z') ? c1 += 3 : c1 = '*';
    
    // Se il carattere originale era x, y o z, incrementato di 3 "sfora" dai caratteri previsti, 
    // quindi riparto dalla 'a' sottraendo 26
    if (c1 > 'z') c1 -= 26; 

    // Ripeto per gli altri due char in input
    (c2 >= 'a' && c2 <= 'z') ? c2 += 3 : c2 = '*';
    if (c2 > 'z') c2 -= 26;

    (c3 >= 'a' && c3 <= 'z') ? c3 += 3 : c3 = '*';
    if (c3 > 'z') c3 -= 26;

    cout << "Cifrario di Cesare: ";
    cout << c1 << ' ' << c2 << ' ' << c3 << ' ' << endl;
    
    return 0;
}