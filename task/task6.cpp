#include <iostream>
#include <cstring>

using namespace std;

struct contatore {
    int lettere;
    int cifre;
};

contatore separa(char* s, char* alpha, char* num) {
    contatore contatore = {0, 0};

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 48 && s[i] <= 57 ) {
            num[contatore.cifre] = s[i];
            contatore.cifre++;
        }

        if ((s[i] >= 65 && s[i] <= 90) || 
             (s[i] >= 97 && s[i] <= 122)) {
                alpha[contatore.lettere] = s[i];
                contatore.lettere++;
             }

    }

    return contatore;

}


int main() {
    char str[100];
    char SAlpha[100], SNum[100];

    cout << "Inserisci una stringa: ";
    cin.getline(str, 100);

    contatore contatore = separa(str, SAlpha, SNum);

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