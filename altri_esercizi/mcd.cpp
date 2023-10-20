#include <iostream>

using namespace std;

int main() {
    int a, b, r;

    cout << "Inserisci due numeri interi:" << endl;
    cin >> a >> b;

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    cout << "Il MCD e' ";
    if (a < 0) cout << -a;
    else cout << a;

    return 0;
}