#include <iostream>

using namespace std;

int main() {
    float a, b, c;

    cout << "Inserisci le lunghezze dei tre lati di un triangolo:" << endl;
    cin >> a >> b >> c;

    if (a == b) {
        if (b == c) cout << "Il triangolo e' equilatero";
        else cout << "Il triangolo e' isoscele";
    }
    else {
        if (a == c || b == c) cout << "Il triangolo e' isoscele";
        else cout << "Il triangolo e' scaleno";
    }
    
    return 0;
}