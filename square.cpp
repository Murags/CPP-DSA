#include <iostream>

int perimeter(int l){
    return 4 * l;
}

int area(int l){
    return l * l;
}

int main(){
    int length = 0;
    std::cout << "Enter the length of the square: ";
    std::cin >> length;

    std::cout << "Perimeter: " << perimeter(length) << std::endl;
    std::cout << "Area: " << area(length) << std::endl;

    return 0;
}
