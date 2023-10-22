#include <iostream>

using namespace std;

int main() {
    int n;

    // Leggo la grandezza dell'array
    cout << "Inserisci la grandezza dell'array: ";
    cin >> n; 

    // Inizializzo e riempio array di lunghezza n
    int input[n];
    for (int i = 0; i < n; i++) {
        cout << "Numero: ";
        cin >> input[i];
    }

    for (int i = 0; i < n; i++) {
        int occ = 1; // Ogni elemento ha almeno un'occorrenza

        for (int j = i + 1; j < n; j++) { // Controllo tutti gli elementi seguenti
            if (input[j] == input[i]) {   
                occ++;                    // Se trovo un'altra occorrenza aumento il conteggio
                
                // "Cancello" il duplicato shiftando l'array a sinistra di 1 partendo da input[j]
                for (int k = j; k < n; k++) input[k] = input[k + 1]; 
                // Diminuisco di 1 il numero di elementi da controllare, perché input[n-1] == input[n-2]
                n--;                                              
                // L'elemento alla posizione input[j+1] e' stato spostato a input[j], quindi diminuisco j di 1 per non saltarlo 
                j--;                                                
            }
        }

        cout << "numero " << input[i] << " occorrenze: " << occ << endl << endl;
    } 

    return 0;
}