/**
 * Task 4 - Deadline 14/11
 * Si cmath/cstring, no puntatori?
 * 
 * Lettura di due parole (lunghezza max 100, no spazi o a capo)
 * Stampa se sono uguali (con stampa della parola al contrario)
 * Una suffisso dell'altra
 * Una suffisso dell'altra (possono succedere entrambi insieme)
 * 
 * Ripetuto, condizione di uscita stringa "$"
*/

#include <iostream>
#include <cstring>

using namespace std;

#define MAX_LENGTH 100

int main() {
    char parola1[MAX_LENGTH];
    char parola2[MAX_LENGTH];

    do {
        cout << "Inserire la prima parola: ";
        cin >> parola1;

        if (strcmp(parola1, "$") == 0)
            break;

        cout << "Inserire la seconda parola: ";
        cin >> parola2;

        if (strcmp(parola2, "$") == 0)
            break;


        // Check se le due parole sono uguali
        if (strcmp(parola1, parola2) == 0) {
            cout << "Le due parole sono uguali." << endl << "Reverse: ";

            // Stampa parola reverse
            for (int i = strlen(parola1); i > 0; i--)
                cout << parola1[i - 1];

            cout << endl;
        }

        else {
            int len1 = strlen(parola1);
            int len2 = strlen(parola2);

            // Tengo sempre la parola piu' corta come prima
            // Se e' piu' lunga, inverto parole e loro lunghezze
            if (len1 > len2) {
                char tmp[100];
                strcpy(tmp, parola1);
                strcpy(parola1, parola2);
                strcpy(parola2, tmp);

                len1 = strlen(parola1);
                len2 = strlen(parola2);
            }

            // Check prefisso
            if (strncmp(parola1, parola2, len1) == 0)
                cout << "La parola " << parola1 << " e' prefisso di " << parola2 << endl;
            
            // Check suffisso
            // Una parola puo' essere sia prefisso che suffisso dell'altra, niente else if
            // Controllo se l'ultimo carattere e' uguale e scorro all'indietro
            if (parola1[len1 - 1] == parola2[len2 - 1]) {
                bool suffisso = true;

                for (int i = len1 - 1; i > 0; i--) 
                    if (parola1[i - 1] != parola2[len2 - len1 + i - 1])
                        suffisso = false;

                if (suffisso)
                    cout << "La parola " << parola1 << " e' suffisso di " << parola2 << endl;
            }
        }

        cout << endl;

    } while (1);

    cout << "Addio!" << endl;

    return 0;   
}