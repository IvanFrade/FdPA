#include <iostream>
#include <string>

int main() {
    char c;
    std::string output = "";

    
    std::cout << "Inserire tre caratteri: " << std::endl;

    for (int i = 0; i < 3; i++) {
        std::cin >> c;

        if (c > 96 && c < 123) c = (c < 120 ? c + 3 : c - 23);
        else c = '*';

        output += c;
        output += ' ';
    }

    std::cout << "Cifrario di Cesare: " << output << std::endl;

    return 0;
}