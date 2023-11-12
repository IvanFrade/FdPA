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

        int len1 = strlen(parola1);
        int len2 = strlen(parola2);

        if (strcmp(parola1, parola2) == 0) {
            cout << "Le due parole sono uguali." << endl << "Reverse: ";

            for (int i = len1; i > 0; i--)
                cout << parola1[i - 1];

            cout << endl;
        }

        else {
            if (len1 > len2) {
                char tmp[100];
                strcpy(tmp, parola1);
                strcpy(parola1, parola2);
                strcpy(parola2, tmp);

                int t = len1;
                len1 = len2;
                len2 = t;
            }

            if (strncmp(parola1, parola2, len1) == 0)
                cout << "La parola " << parola1 << " e' prefisso di " << parola2 << endl;
            
            if (parola1[len1 - 1] == parola2[len2 - 1]) {
                bool suffisso = true;

                for (int i = len1 - 1; i > 0; i--) 
                    if (parola1[i - 1] != parola2[len2 - len1 + i - 1])
                        suffisso = false;

                if (suffisso)
                    cout << "La parola " << parola1 << " e' suffisso di " << parola2 << endl;
            }
        }

        cout << endl;

    } while (1);

    cout << "Addio!" << endl;

    return 0;   
}