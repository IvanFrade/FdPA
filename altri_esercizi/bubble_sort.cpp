#include <iostream>

using namespace std;

int main() {
    /*int length;
    do {
        cout << "Numero elementi: ";
        cin >> length;
    } while (length < 1);

    int numbers[length];

    for (int i = 0; i < length; i++) {
        cout << "Numero: ";
        cin >> numbers[i];
    }*/

    int numbers[10] = {-9, -1, 1, 3, 4, 6, 8, 9, 11, 13};
    int loops = 0;
    bool sorted = false;

    do {
        sorted = true;

        for (int i = 0; i < 9; i++) {
            if (numbers[i] > numbers[i + 1]) {
                int temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;

                sorted = false;
            }
        }

        loops++;

    } while (!sorted);

    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << ", ";
    }

    cout << "Needed " << loops << " iterations" << endl;
 
    return 0;
}