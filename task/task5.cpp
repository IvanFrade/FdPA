#include <iostream>

using namespace std;

struct persona { 
    char nome[64];
    char cognome[64];
    char numero[10];
};

int main() {
    persona rubrica[100];
    int op;

    cout << "*** Rubrica ***" << endl;

    do {
        cout << "\t1 - Visualizza rubrica" << endl;
        cout << "\t2 - Inserisci contatto" << endl;
        cout << "\t3 - Cancella contatto" << endl;
        cout << "\t4 - Esci" << endl;
        cin >> op;

        switch (op)
        {
        case 1:
            break;

        case 2:
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