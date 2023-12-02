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
    int input, indice = 0, contatore = 0;
    int* A[10];
    bool found = false;

    while (true) {
        cout << "Inserire un numero: ";
        cin >> input;

        if (input < 0)
            break;

        found = false;

        for (int i = 0; i < indice; i++)
            if (input == *A[i]) {
                A[indice] = A[i];
                found = true;

                break;
            }

        if (!found) {
            A[indice] = new int;
            if (A[indice] == NULL) {
                cout << "Memoria insufficiente!";
                return -1;
            }

            contatore++;
        }
        
        indice++;
    }

    cout << "Allocate " << contatore << " variabili" << endl;

    cout << "Contenuto di A: " << endl;
    for (int i = 0; i < indice; i++) 
        cout << *A[indice] << " ";

    return 0;
}