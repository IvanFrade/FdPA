#include <iostream>

using namespace std;

int main() {
    int x, y, op;

    for (;;) {
        do {
            cout << "Operazione da eseguire: ";
            cin >> op;
        } while (op < -1 || op > 3);

        if (op == -1) 
            break;

        cout << "Primo numero: ";
        cin >> x;
        cout << "Secondo numero: ";
        cin >> y;
        
        switch (op) {
            case 0:
                cout << x << " + " << y << " = " << x + y << endl;
                break;
            case 1:
                cout << x << " - " << y << " = " << x - y << endl;
                break;
            case 2:
                cout << x << " * " << y << " = " << x * y << endl;
                break;
            case 3:
                cout << x << " / " << y << " = " << x / (float) y << endl;
                break;
            default:
                cout << "Errore!" << endl; // Non dovrebbe mai stamparlo
        }
    }

    return 0;
}