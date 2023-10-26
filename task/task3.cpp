/* Task 3
   Deadline 07/11

   Leggere in input un array di 4 bit con cotrollo su input, dare l'opzione di
    0 - stampa array
    1 - conversione e stampa decimale
    2 - calcolo e stampa opposto (in binario) con eventuale errore (caso 1000)

   Controllo su input operazione, solo un'operazione

   [0][1][1][1] -> [1][0][0][1]
   0111 = 7 l'opposto e' -7, inverto i bit e ottengo 1000, aggiungo uno e ottengo 1001
   1011 = -5 l'opposto e' 5, inverto i bit e ottengo 0100, aggiungo uno e ottengo 0101
*/
#include <iostream>

using namespace std;

int main() {
    int binario[4], op;

    for (int i = 0; i < 4; i++) {
        cout << "Inserisci il bit nella posizione " << 3-i << ": ";
        cin >> binario[i];

        while (binario[i] != 0 && binario[i] != 1) {
            cout << "Errore!\nInserisci il bit nella posizione " << 3-i << ": ";
            cin >> binario[i];
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
            for (int i = 0; i < 4; i++) 
                cout << binario[i];
            break;
        case 1:
            // TODO: conversione in decimale e stampa
            break;
        case 2:
            // TODO: calcolo dell'opposto e stampa
            break;
        default:
            cout << "Errore imprevisto"; // Non dovrebbe mai succedere
    }

    return 0;
}