/* Task 3
   Deadline 07/11

   Leggere in input un array di 4 bit con cotrollo su input, dare l'opzione di
    0 - stampa array
    1 - conversione e stampa decimale
    2 - calcolo e stampa opposto (in binario) con eventuale errore (caso 1000)

   Controllo su input operazione, solo un'operazione

   Conversione decimale: i positivi somma delle potenze, i negativi sono [-7, -1] e corrispondono a [8, 15]
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

int main() {
    int bin[4]; // Input dell'utente
    int op;     // Operazione scelta 

    for (int i = 0; i < 4; i++) {
        cout << "Inserisci il bit nella posizione " << 3-i << ": ";
        cin >> bin[i];

        while (bin[i] < 0 || bin[i] > 1) {
            cout << "Errore!\nInserisci il bit nella posizione " << 3-i << ": ";
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
        // Stampa del numero binario tale e quale
        case 0:
            cout << "Numero binario: ";
            for (int i = 0; i < 4; i++) 
                cout << bin[i];
            break;

        // Conversione a decimale e stampa
        case 1:
        {   
            int dec = 0;    // Numero in decimale

            // Sommo le potenze crescenti di 2 quando il bit e' 1, partendo dal meno significativo
            for (int i = 3; i >= 0; i--) {
                dec += bin[i] * pow(2, 3-i);
            }

            // Se il numero in complemento a 2 iniziava con 1, era negativo
            // Quindi sottraggo 16 (2^nBit)
            if (bin[0])
                dec -= 16;

            cout << "Numero decimale: " << dec;
            break;
        }

        // Calcolo e stampa dell'opposto (in binario)
        case 2:
        {
            // Caso particolare: l'opposto di 1000 non puo' essere rappresentato con 4 bit
            if (bin[0] && !bin[1] && !bin[2] && !bin[3]) {
                cout << "Overflow!";
                break;
            }

            /* 
            Per il calcolo dell'opposto inverto tutti i bit e aggiungo 1
            Uso una variabile di appoggio che indica se ci sia riporto o no
            Inizializzata a true perche' devo sempre aggiungere 1 all'inizio della conversione
            Inverto il bit solo se non c'e' riporto, in caso contrario rimane uguale
            Infine controllo se il bit sia 1, in caso positivo posso settare riporto a falso 
            Unico caso di possibile "overflow" gia' eliminato prima
            */
            bool riporto = true;

            for (int i = 3; i >= 0; i--) {
                if (!riporto)                               
                    bin[i] = !bin[i];     // Inversione bit
                 
                if (bin[i])
                    riporto = false;
            }

            cout << "Opposto: ";
            for(int i = 0; i < 4; i++)
                cout << bin[i];
            break;
        }

        default:
            cout << "Errore imprevisto"; // Non dovrebbe mai succedere
    }

    return 0;
}