#include <iostream>

using namespace std;

int main() {
    int voto;

    cout << "Inserisci il voto: ";
    cin >> voto;

    if (voto < 11) cout << "Gravemente insufficiente";
    else if (voto < 18) cout << "Insufficiente";
    else if (voto < 25) cout << "Sufficiente";
    else if (voto < 28) cout << "Buono";
    else cout << "Ottimo";

    return 0;
}