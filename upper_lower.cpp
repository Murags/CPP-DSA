#include <iostream>

int main() {
    std::cout << "Enter char: ";
    char c;
    std::cin >> c;

    int ascii = static_cast<int>(c);
    if (ascii >= 65 && ascii <= 90) {
        std::cout << "Uppercase" << std::endl;
    } else if (ascii >= 97 && ascii <= 122) {
        std::cout << "Lowercase" << std::endl;
    } else {
        std::cout << "Not a letter" << std::endl;
    }

    return 0;
}
