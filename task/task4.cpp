#include <iostream>
#include <cstring>

using namespace std;

#define MAX_LENGTH 100

int main() {
    char parola1[MAX_LENGTH];
    char parola2[MAX_LENGTH];

    cout << "Inserire la prima parola: ";
    cin >> parola1;

    if (strcmp(parola1, "$") == 0)
        return 0;

    cout << "Inserire la seconda parola: ";
    cin >> parola2;

    if (strcmp(parola2, "$") == 0)
        return 0;

    if (strcmp(parola1, parola2)) {
        cout << "Le due parole sono uguali." << endl << "Reverse: ";

        for (int i = strlen(parola1); i > 0; i--)
            cout << parola1[i - 1];

    }
    else if (strlen(parola1) != strlen(parola2)) {
        // TODO: finire
    }

    return 0;   
}