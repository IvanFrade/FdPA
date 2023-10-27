/* Task 3
   Deadline 07/11

   Leggere in input un array di 4 bit con cotrollo su input, dare l'opzione di
    0 - stampa array
    1 - conversione e stampa decimale
    2 - calcolo e stampa opposto (in binario) con eventuale errore (caso 1000)

   Controllo su input operazione, solo un'operazione

   Stampa array: semplice

   Conversione decimale: i positivi semplice, i negativi sono [-7, -1] e corrispondono a [8, 15]
   quindi posso sottrarre 16 e trovare il negativo senza fare la conversione al contrario
   -8 caso particolare con errore overflow

   opposto: 
   [0][1][1][1] -> [1][0][0][1]
   0111 = 7 l'opposto e' -7, inverto i bit e ottengo 1000, aggiungo uno e ottengo 1001
   1011 = -5 l'opposto e' 5, inverto i bit e ottengo 0100, aggiungo uno e ottengo 0101

*/
#include <iostream>
#include <cmath>

using namespace std;

const int N_BIT = 8;

int main() {
    int bin[N_BIT], op;

    for (int i = 0; i < N_BIT; i++) {
        cout << "Inserisci il bit nella posizione " << N_BIT-1-i << ": ";
        cin >> bin[i];

        while (bin[i] != 0 && bin[i] != 1) {
            cout << "Errore!\nInserisci il bit nella posizione " << N_BIT-1-i << ": ";
            cin >> bin[i];
        }
    }

    cout << "Operazione:" << endl;
    cout << "\t0 - Stampa binario:" << endl;
    cout << "\t1 - Converti in decimale:" << endl;
    cout << "\t2 - Calcola opposto: " << endl;
    cin >> op;

    while (op < 0 || op > 2) {
        cout << "Errore!" << endl;
        cin >> op;
    }

    switch (op) {
        case 0:
            cout << "Numero binario: ";
            for (int i = 0; i < N_BIT; i++) 
                cout << bin[i];
            break;

        case 1:
        {   
            int dec = 0;
            for (int i = N_BIT; i > 0; i--) {
                dec += bin[i-1] * pow(2, N_BIT-i);
            }

            if (bin[0])
                dec -= pow(2, N_BIT);

            cout << "Numero decimale: " << dec;
            break;
        }

        case 2:
        {
            // hardcoded, non funziona con N_BIT != 4
            if (bin[0] && !bin[1] && !bin[2] && !bin[3]) {
                cout << "Overflow!";
                break;
            }

            bool riporto = true;

            for (int i = N_BIT-1; i >= 0; i--) {
                ++bin[i] %= 2;
                if (riporto) {
                    if (!bin[i])
                        riporto = false;
                    
                    ++bin[i] %= 2;
                }
            }

            cout << "Opposto: ";
            for(int i = 0; i < N_BIT; i++)
                cout << bin[i];
            break;
        }

        default:
            cout << "Errore imprevisto!"; // Non dovrebbe mai succedere
    }

    return 0;
}