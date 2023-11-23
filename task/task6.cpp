#include <iostream>
#include <cstring>

using namespace std;

// Contatore lettere e cifre
struct Contatore {
    int lettere;
    int cifre;
};

// Riceve in input una stringa, estrae cifre e lettere e le inserisce 
// in due stringhe separate
// Restituisce il numero di lettere e cifre trovate nella stringa input
Contatore separa(char* s, char* alpha, char* num) {
    Contatore contatore = {0, 0};

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 48 && s[i] <= 57 ) {            // Cifre

            num[contatore.cifre] = s[i];
            contatore.cifre++;
        }

        else if ((s[i] >= 65 && s[i] <= 90) ||      // Lettere
            (s[i] >= 97 && s[i] <= 122)) {

            alpha[contatore.lettere] = s[i];
            contatore.lettere++;
        }

    }

    return contatore;
}


int main() {
    char str[101];                  // Stringa input
    char SAlpha[100];               // Lettere nell'input
    char SNum[100];                 // Cifre nell'input
    Contatore contatore;            // Contatore cifre e lettere nell'input

    cout << "Inserisci una stringa: ";
    cin.getline(str, 101);

    while (cin.fail()) {
        cin.clear();
        cin.ignore(9999, '\n');

        cout << "Lunghezza max 100 caratteri! Riprova: ";
        cin.getline(str, 101);
    }

    contatore = separa(str, SAlpha, SNum);

    // Stampa
    cout << "Caratteri alfabetici" << endl;

    for (int i = 0; i < contatore.lettere; i++) {
        cout << SAlpha[i] << " ";
    }

    cout << endl << "Caratteri numerici" << endl;

    for (int i = 0; i < contatore.cifre; i++) {
        cout << SNum[i] << " ";
    }

    return 0;
}