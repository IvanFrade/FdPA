#include <iostream>

int main() {
    char c1, c2, c3;

    std::cout << "Inserire tre caratteri: " << std::endl;

    std::cin >> c1;
    if (c1 >= 'a' && c1 <= 'z') c1 = (c1 < 'x' ? c1 + 3 : c1 - 23);
    else c1 = '*';

    std::cin >> c2;
    if (c2 >= 'a' && c2 <= 'z') c2 = (c2 < 'x' ? c2 + 3 : c2 - 23);
    else c2 = '*';

    std::cin >> c3;
    if (c3 >= 'a' && c3 <= 'z') c3 = (c3 < 'x' ? c3 + 3 : c3 - 23);
    else c3 = '*';
    
    std::cout << "Cifrario di Cesare: ";
    std::cout << c1 << ' ' << c2 << ' ' << c3 << ' ';
    
    return 0;
}