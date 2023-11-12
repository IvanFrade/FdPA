#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

#define MAX_LENGTH 100

int main() {
    char parola1[MAX_LENGTH];
    char parola2[MAX_LENGTH];

    do {
        cout << "Inserire la prima parola: ";
        cin >> parola1;

        if (strcmp(parola1, "$") == 0)
            break;

        cout << "Inserire la seconda parola: ";
        cin >> parola2;

        if (strcmp(parola2, "$") == 0)
            break;

        if (strcmp(parola1, parola2) == 0) {
            cout << "Le due parole sono uguali." << endl << "Reverse: ";

            for (int i = strlen(parola1); i > 0; i--)
                cout << parola1[i - 1];

            cout << endl << endl;
        }

        else {
            if (strlen(parola1) > strlen(parola2)) {
                char tmp[100];
                strcpy(tmp, parola1);
                strcpy(parola1, parola2);
                strcpy(parola2, tmp);
            }

            if (strncmp(parola1, parola2, strlen(parola1)) == 0)
                cout << "La parola " << parola1 << " e' prefisso di " << parola2 << endl << endl;
            else {
                for (int i = 0; i < strlen(parola1) / 2; i++) {
                    char tmp = parola1[i];
                    parola1[i] = parola1[strlen(parola1) - i - 1];
                    parola1[strlen(parola1) - i - 1] = tmp;
                }

                for (int i = 0; i < strlen(parola1); i++) 
                    parola2[i] = parola2[strlen(parola2) - i - 1];
                    if (strncmp(parola1, parola2, strlen(parola1)) == 0)
                        cout << "La parola " << parola1 << " e' suffisso di " << parola2 << endl << endl;
            }
                
            cout << endl << endl;
        }

    } while (1);

    return 0;   
}