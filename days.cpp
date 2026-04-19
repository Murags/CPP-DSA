#include <iostream>

int main (){
    int days = 0;

    std::cout << "Enter the number of days: ";
    std::cin >> days;

    std::cout << "\nTotal seconds: " << days * 24 * 60 * 60 << "\n";

    return 0;
}
