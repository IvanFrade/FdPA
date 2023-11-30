/**
 * leggere da tastiera interi positivi fino al primo negativo inserito
 * memorizzarli in un array A di puntatori a interi max. 1000 elementi
 * per ogni x, se x non e' in A, variabile dinamica che memorizza x e aggiunta del puntatore alla variabile dinamica
 * se x e' gia in A, aggiunge ad A il puntatore alla variabile contenente x, senza allocare ancora
 * 
 * stampare il numero di variabili allocate e A
 * 
 * No altre funzioni
 * deadline 5/12 mezzanotte
 * 
*/
#include <iostream>

using namespace std;

int main() {
    int input;

    do {
        cout << "Inserisci un numero: ";
        cin >> input;

    } while (input >= 0);

    return 0;
}