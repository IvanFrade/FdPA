/* Stampare un triangolo isoscele in verticale con base verso destra, data l'altezza. Es:
    *
  * *
* * *
  * *
    *
   
   Se h <= 0, continuare a richiedere l'inserimento finche' h > 0
   Edge case h = 1?

   Deadline martedi' 24/10
*/
#include <iostream>

using namespace std;

int main() {
    int  h; // Altezza del triangolo

    cout << "Inserire un valore intero (> 0): ";
    cin >> h;

    // Se l'input non e' valido, entro in un ciclo con condizione di uscita = input valido
    while (h <= 0) {
        cout << "Input errato.\nInserire un valore intero (> 0): ";
        cin >> h;
    }

    // Stampo prima le prime h righe
    for (int i = 1; i <= h; i++) {
        for (int j = 0; j < h; j++) {       // Ogni riga ha sempre h caratteri (h*2 con gli extra spazi)
            if (j < h-i) cout << "  ";      // Se i rappresenta il numero di *, h-i e' il numero di spazi vuoti
            else cout << "* ";
        }

        cout << endl;                       // Vado a capo dopo ogni riga
    }

    // Stampo le righe rimanenti
    for (int i = 1; i < h; i++) {
        for (int j = 0; j < h; j++) {        
            if (j < i) cout << "  ";        // Essendo l'ordine invertito, qui i rappresenta il numero di spazi vuoti
            else cout << "* ";
        }

        cout << endl;
    }

    return 0;
}