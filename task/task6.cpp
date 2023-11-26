#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

// Legge da std input una stringa di max 100 caratteri
void leggiStringa(char input[]) {
    cout << "Inserisci una stringa: ";
    cin.getline(input, 101);

    while (cin.fail()) {
        cin.clear();
        cin.ignore(9999, '\n');

        cout << "Lunghezza max 100 caratteri! Riprova: ";
        cin.getline(input, 101);
    }
}

// Riceve in input una stringa, estrae cifre e lettere e le inserisce 
// in due stringhe separate, aggiornando i rispettivi contatori
void separa(char s[], char alpha[], char num[], int& nLettere, int& nCifre) {

    for (int i = 0; i < strlen(s); i++) {
        if (isdigit(s[i])) {            // Cifre
            num[nCifre] = s[i];
            nCifre++;
        }

        else if (isalpha(s[i])) {       // Lettere
            alpha[nLettere] = s[i];
            nLettere++;
        }

    }
}

// Stampa singola stringa aggiungendo uno spazio tra ogni carattere
void stampaStringa(char str[], int len) {
    for (int i = 0; i < len; i++)
        cout << str[i] << " ";
}

// Stampa del risultato
void stampa(char lettere[], char cifre[], int nLettere, int nCifre) {
    if (nLettere <= 0)
        cout << "La stringa non contiene caratteri alfabetici";
    else {
        cout << "Caratteri alfabetici" << endl;
        stampaStringa(lettere, nLettere);
    }

    if (nCifre <= 0)
        cout << endl << "La stringa non contiene caratteri numerici" << endl;
    else {
        cout << endl << "Caratteri numerici" << endl;
        stampaStringa(cifre, nCifre);
    }
}

int main() {
    char str[101];                  // Stringa input
    char SAlpha[100];               // Lettere nell'input
    char SNum[100];                 // Cifre nell'input
    int nLettere = 0, nCifre = 0;   // Contatore cifre e lettere nell'input

    leggiStringa(str);
    separa(str, SAlpha, SNum, nLettere, nCifre);
    stampa(SAlpha, SNum, nLettere, nCifre);

    return 0;
}