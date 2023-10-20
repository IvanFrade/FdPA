#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Inserisci un intero maggiore di zero: ";
    cin >> n;

    while (n < 1) {
        cout << "Input non valido. Riprova: ";
        cin >> n;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i || j == n - i - 1) cout << "1 ";
            else cout << "0 ";
        }

        cout << endl;
    }

    return 0;
}