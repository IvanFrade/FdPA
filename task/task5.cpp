#include <iostream>

using namespace std;

struct persona { 
    char nome[64];
    char cognome[64];
    char numero[10];
};

int main() {
    persona rubrica[100];
    int nContatti = 0;

    int op;

    cout << "*** Rubrica ***" << endl;

    do {
        cout << "\t1 - Visualizza rubrica" << endl;
        cout << "\t2 - Inserisci contatto" << endl;
        cout << "\t3 - Cancella contatto" << endl;
        cout << "\t4 - Esci" << endl;
        cin >> op;
        cin.ignore();

        switch (op)
        {
        case 1:
            if (nContatti == 0){
                cout << "Rubrica vuota!" << endl;
                break;
            }

            for (int i = 0; i < nContatti; i++) {
                cout << rubrica[i].nome << " " << rubrica[i].cognome << " " << rubrica[i].numero << endl;
            }
            
            break;

        case 2:
            persona p;

            cout << "Inserisci il nome del contatto da aggiungere: ";
            cin.getline(p.nome, 64);
            
            cout << "Inserisci il cognome del contatto da aggiungere: ";
            cin.getline(p.cognome, 64);
            
            cout << "Inserisci il numero del contatto da aggiungere: ";
            cin.getline(p.numero, 64);

            rubrica[nContatti] = p;
            nContatti++;

            cout << endl << "Contatto aggiunto!" << endl;

            break;

        case 3:
            break;
        
        case 4:
            break;

        default:
            cout << "Operazione non valida." << endl;
            break;
        }
    } while (op != 4);

    cout << "Addio!" << endl;

    return 0;
}