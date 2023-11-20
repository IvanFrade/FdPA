#include <iostream>
#include <cstring>

using namespace std;

#define MAX_CONTATTI 100    // Max contatti in rubrica

struct persona { 
    char nome[65];
    char cognome[65];
    char numero[11]; 
};

int main() {
    persona rubrica[MAX_CONTATTI];  // Rubrica di contatti
    int nContatti = 0;              // Indice della rubrica
    int op;                         // Operazione dell'utente
    bool found = 0;                 // Flag contatto trovato

    cout << "*** Rubrica ***" << endl;

    do {
        cout << "\t1 - Visualizza rubrica" << endl;
        cout << "\t2 - Inserisci contatto" << endl;
        cout << "\t3 - Cancella contatto" << endl;
        cout << "\t4 - Esci" << endl;
        cin >> op;

        // Check se l'utente inserisce lettere
        if (cin.fail()) {
            cin.clear();
            cin.ignore(9999, '\n');

            cout << "Input non valido!" << endl;

            continue;
        }

        cin.ignore(); // Consuma il \n alla fine

        switch (op)
        {
        case 1:     // Stampa contatti
            if (nContatti == 0){
                cout << "Rubrica vuota!" << endl;
                break;
            }

            for (int i = 0; i < nContatti; i++) 
                cout << rubrica[i].nome << " " << rubrica[i].cognome << " " << rubrica[i].numero << endl;
            
            break;

        case 2: {   // Aggiungi contatto
            // Controllo se la rubrica e' piena
            if (nContatti >= MAX_CONTATTI) {
                cout << "La rubrica e' piena! Elimina uno o piu' contatti e riprova." << endl;
                break;
            }

            persona p;  // Persona da aggiungere alla rubrica
            found = 0;

            cout << "Inserisci il nome del contatto da aggiungere: ";
            cin.getline(p.nome, 65);

            while (cin.fail()) {
                cin.clear();
                cin.ignore(9999, '\n');

                cout << "Nome troppo lungo! Puoi inserire max 64 caratteri. Riprova: ";
                cin.getline(p.nome, 65);
            }
            
            cout << "Inserisci il cognome del contatto da aggiungere: ";
            cin.getline(p.cognome, 65);

            while (cin.fail()) {
                cin.clear();
                cin.ignore(9999, '\n');

                cout << "Cognome troppo lungo! Puoi inserire max 64 caratteri. Riprova: ";
                cin.getline(p.cognome, 65);
            }

            // Non sono consentiti doppioni
            for (int i = 0; i < nContatti; i++)
                if (strcmp(p.nome, rubrica[i].nome) == 0 && strcmp(p.cognome, rubrica[i].cognome) == 0) {
                    cout << "Contatto gia' presente nella rubrica!" << endl;
                    found = 1;
                }
            
            if (!found) {
                bool numValido; // Flag se il numero e' valido

                do {
                    cout << "Inserisci il numero del contatto da aggiungere: ";
                    cin.getline(p.numero, 11);

                    numValido = 1;

                    // Check sulla lunghezza
                    if (cin.fail()) {
                        numValido = 0;

                        cin.clear();
                        cin.ignore(9999, '\n');

                        cout << "Input non valido! Lunghezza max 10 caratteri." << endl;

                        continue;
                    }

                    // Check che l'utente abbia inserito solo cifre
                    int j = 0;
                    
                    while (p.numero[j] != '\0') {
                        if (p.numero[j] < 48 || p.numero[j] > 57) {     // Nella tabella ASCII numeri compresi tra 48 e 57
                            cout << "Il numero di telefono puo' contenere solo cifre!" << endl;
                            numValido = 0;

                            break;
                        }

                        j++;
                    }

                    // Check che il numero abbia almeno 9 cifre 
                    if (j < 9) {
                        cout << "Numero troppo corto! Deve avere almeno 9 cifre." << endl;
                        numValido = 0;
                    }

                } while (!numValido);

                rubrica[nContatti] = p; 
                nContatti++;

                cout << endl << "Contatto aggiunto!" << endl;
            }

            break;
        }

        case 3: {   // Elimina contatto
            char nome[65], cognome[65];     // Variabili di appoggio per la ricerca
            found = 0;

            cout << "Inserisci il nome del contatto da cancellare: ";
            cin.getline(nome, 64);

            while (cin.fail()) {
                cin.clear();
                cin.ignore(9999, '\n');

                cout << "Nome troppo lungo! Puoi inserire max 64 caratteri. Riprova: ";
                cin.getline(nome, 64);
            }

            cout << "Inserisci il cognome del contatto da cancellare: ";
            cin.getline(cognome, 64);

            while (cin.fail()) {
                cin.clear();
                cin.ignore(9999, '\n');

                cout << "Cognome troppo lungo! Puoi inserire max 64 caratteri. Riprova: ";
                cin.getline(cognome, 64);
            }

            // Ricerca del contatto da elimiare
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