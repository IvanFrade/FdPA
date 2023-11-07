#include <iostream>

using namespace std;

int main() {
    int m, n;

    do {
        cout << "Inserisci la larghezza della matrice: ";
        cin >> m;
    } while (m <= 0);

    do {
        cout << "Inserisci l'altezza della matrice: ";
        cin >> n;
    } while (n <= 0);

    int matrice1[m][n], matrice2[m][n];

    for (int i = 0; i < m * n; i++) {
        cout << "Inserisci l'elemento della prima matrice: ";
        cin >> matrice1[i % m][i / m];
    }

    for (int i = 0; i < m * n; i++) {
        cout << "Inserisci l'elemento della seconda matrice: ";
        cin >> matrice2[i % m][i / m];
        matrice2[i % m][i / m] += matrice1[i % m][i / m];
    }

    cout << "Somma delle matrici:";

    for (int i = 0; i < m * n; i++) {
        if (!(i % m))
            cout << endl;
        cout << " [ " << matrice2[i % m][i / m] << " ] ";
    }


}