#include <iostream>
using namespace std;

int main() {
    int x, y, mcm;

    cout << "Primo numero: ";
    cin >> x;
    cout << "Secondo numero: ";
    cin >> y;

    mcm = x;
    while (mcm % y != 0) mcm += x;

    cout << "Il minimo comune multiplo e' " << mcm;
    
    return 0;
}