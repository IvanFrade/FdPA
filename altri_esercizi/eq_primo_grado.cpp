#include <iostream>

using namespace std;

int main() {
    float a, b;

    cout << "Inserisci due valori:" << endl;
    cin >> a >> b;

    if (a == 0) cout << "Errore: l'equazione " << a << "x + " << b << " = 0 non ha soluzioni.";
    else if (b == 0) cout << "L'equazione " << a << "x + " << b << " = 0 ha come soluzione 0";
    else cout << "L'equazione " << a << "x + " << b << " = 0 ha come soluzione " << (-b/a);

    return 0;
}