#include <iostream>

using namespace std;

int main() {
    int giorno, mese;

    cout << "Inserire giorno: ";
    cin >> giorno;

    cout << "Inserire mese: ";
    cin >> mese;

    if (giorno == 30 && mese == 12) {
        cout << "Manca 1 giorno alla fine dell'anno";
        return 0;
    }

    switch (mese) {
        case (2):
            giorno = 28 - giorno;
            break;
        case (4, 6, 9, 11):
            giorno = 30 - giorno;
            break;
        default:
            giorno = 31 - giorno;
    }

    switch (mese) {
        case 1:
            giorno += 28;
        case 2:
            giorno += 31;
        case 3:
            giorno += 30;
        case 4:
            giorno += 31;
        case 5:
            giorno += 30;
        case 6:
            giorno += 31;
        case 7:
            giorno += 31;
        case 8:
            giorno += 30;
        case 9:
            giorno += 31;
        case 10:
            giorno += 30;
        case 11:
            giorno += 31;
    }

    cout << "Mancano " << giorno << " giorni alla fine dell'anno";

    return 0;
}