#include <iostream>

using namespace std;

int main() {
    int x, y, op;

    cout << "Inserisci primo intero, secondo intero ed operazione da eseguire:" << endl;
    cin >> x >> y >> op;

    if (op == 1) cout << x + y;
    else if (op == 2) cout << x - y;
    else cout << "Errore: operazione non valida";

    return 0;
}