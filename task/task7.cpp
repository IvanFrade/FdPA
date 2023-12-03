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
    int input;              // Valore inserito dall'utente      
    int indice = 0;         // Indice dell'array di puntatori
    int contatore = 0;      // Contatore variabili dinamiche allocate
    int* A[1000];           // Array di puntatori
    bool found = false;     // Flag di appoggio

    while (true) {
        cout << "Inserire un numero: ";
        cin >> input;

        // Condizione di uscita: input < 0
        if (input < 0)
            break;

        found = false;

        // Controllo se il valore inserito e' gia' presente
        for (int i = 0; i < indice; i++)
            if (input == *A[i]) {
                A[indice] = A[i];       // Se presente aggiungo un altro puntatore alla stessa variabile allocata
                found = true;

                break;
            }

        // Se non presente devo allocare una nuova variabile
        if (!found) {
            A[indice] = new int;

            // Controllo memoria insufficiente
            if (A[indice] == NULL) {
                cout << "Memoria insufficiente!";
                return -1;
            }

            *A[indice] = input;     // Assegno alla variabile il valore di input

            contatore++;            // Aumenta il contatore di variabili allocate
        }
        
        indice++;
    }

    cout << "Allocate " << contatore << " variabili" << endl;

    // Stampa e deallocazione delle variabili
    for (int i = 0; i < indice; i++) {
        cout << *A[i] << " ";

        // Per la deallocazione controllo se lo stesso puntatore riappare piu' tardi nell'array
        // Se questa e' l'ultima o unica apparizione, posso deallocare la variabile puntata
        found = false;
        for (int j = i + 1; j < indice; j++)
            if (A[i] == A[j]) {
                found = true;
                break;
            }
        
        if (!found)
            delete A[i];
    }

    return 0;
}