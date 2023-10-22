/* Stampare un triangolo isoscele in verticale con base verso destra, data l'altezza. Es:
    *
  * *
* * *
  * *
    *
   
   Se h <= 0, continuare a richiedere l'inserimento finche' h > 0
   Edge case h = 1?

   Deadline martedi' 24/10
   Usando if, while, for, cmath
*/
#include <iostream>
#include <cmath>

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

    // Con altezza h avro' 2h-1 righe totali
    for (int i = h - 1; i > -h; i--) {
        for (int j = 0; j < h; j++) {       // Ogni riga ha sempre h caratteri (h*2 con gli extra spazi)
            if (j < abs(i)) cout << "  ";   // Abs(i) e' il numero di spazi vuoti, la differenza con h il numero di *
            else cout << "* ";
        }

        cout << endl;                       // Vado a capo dopo ogni riga
    }

    return 0;
}