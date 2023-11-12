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
    int matriceSomma[m][n];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cout << "Inserisci gli elementi della prima matrice: ";
            cin >> matrice1[i][j];
        }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cout << "Inserisci gli elementi della seconda matrice: ";
            cin >> matrice2[i][j];
        }
    
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) 
            matriceSomma[i][j] = matrice1[i][j] + matrice2[i][j];

    cout << "Somma delle matrici: " << endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) 
            cout << matriceSomma[i][j] << " ";
        
        cout << endl;
    }

    return 0;

}