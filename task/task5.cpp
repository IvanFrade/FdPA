#include <iostream>
#include <cstring>

using namespace std;

struct persona { 
    char nome[64];
    char cognome[64];
    char numero[11]; // 10 cifre + carattere di terminazione
};

int main() {
    persona rubrica[100];   // Rubrica di contatti
    int nContatti = 0;      // Indice della rubrica
    int op;                 // Operazione dell'utente
    bool found = 0;         // Flag contatto trovato

    cout << "*** Rubrica ***" << endl;

    do {
        // Stampa menu
        cout << "\t1 - Visualizza rubrica" << endl;
        cout << "\t2 - Inserisci contatto" << endl;
        cout << "\t3 - Cancella contatto" << endl;
        cout << "\t4 - Esci" << endl;
        cin >> op;
        cin.ignore(); // Ignora il \n alla fine

        switch (op)
        {
        case 1:     // Stampa contatti
            if (nContatti == 0){
                cout << "Rubrica vuota!" << endl;
                break;
            }

            for (int i = 0; i < nContatti; i++) {
                cout << rubrica[i].nome << " " << rubrica[i].cognome << " " << rubrica[i].numero << endl;
            }
            
            break;

        case 2: {   // Aggiungi contatto
            // Controllo se la rubrica e' piena
            if (nContatti > 2) {
                cout << "La rubrica e' piena! Elimina uno o piu' contatti e riprova." << endl;
                break;
            }

            persona p;
            found = 0;

            cout << "Inserisci il nome del contatto da aggiungere: ";
            cin.getline(p.nome, 64);
            
            cout << "Inserisci il cognome del contatto da aggiungere: ";
            cin.getline(p.cognome, 64);

            // Non sono consentiti doppioni
            for (int i = 0; i < nContatti; i++)
                if (strcmp(p.nome, rubrica[i].nome) == 0 && strcmp(p.cognome, rubrica[i].cognome) == 0) {
                    cout << "Contatto gia' presente nella rubrica!" << endl;
                    found = 1;
                }
            
            if (!found) {
                cout << "Inserisci il numero del contatto da aggiungere: ";
                cin.getline(p.numero, 64);

                rubrica[nContatti] = p; 
                nContatti++;

                cout << endl << "Contatto aggiunto!" << endl;
            }

            break;
        }

        case 3: {   // Elimina contatto
            char nome[64], cognome[64];
            found = 0;
            cout << "Inserisci il nome del contatto da cancellare: ";
            cin.getline(nome, 64);

            cout << "Inserisci il cognome del contatto da cancellare: ";
            cin.getline(cognome, 64);

            // Ricerca lineare del contatto da elimiare
            for (int i = 0; i < nContatti; i++) {
                if (strcmp(nome, rubrica[i].nome) == 0 && strcmp(cognome, rubrica[i].cognome) == 0) {
                    
                    // Per eliminare il contatto, diminuisco di 1 il numero di contatti
                    // e shifto ogni elemento successivo a sinistra di 1
                    nContatti--;

                    for (int j = i; j < nContatti; j++) 
                        rubrica[j] = rubrica[j + 1];

                    found = 1;
                    cout << "Contatto cancellato!" << endl;

                    // Posso uscire dal ciclo dopo la prima occorrenza perche' non ho contatti doppioni
                    break; 
                }
            }

            if (!found)
                cout << "Contatto non presente nella rubrica!" << endl;

            break;
        }

        case 4:     // Uscita
            break;

        default:    // Op non valida
            cout << "Operazione non valida." << endl;
            break;
        }
    } while (op != 4);

    cout << "Addio!" << endl;

    return 0;
}