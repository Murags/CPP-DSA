#include <iostream>
#include <cmath>

int main(){
    double raduis = 0;
    double volume = 0;

    std::cout << "Enter the radius: ";
    std::cin >> raduis;

    volume = 4.0 / 3.0 * 3.14159 * exp(raduis);
    std::cout << "Volume: " << volume << "\n";

    return 0;
}
