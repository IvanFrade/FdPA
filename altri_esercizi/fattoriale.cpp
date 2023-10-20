#include <iostream>

using namespace std;

int main() {
    int x;

    cout << "Inserisci un numero: ";
    cin >> x;
    cout << x << "! = ";

    for (int i = x - 1; i > 1; i--) x *= i;

    cout << x;

    return 0;
}