#include <iostream>

int main() {
    int num;
    
    std::cout << "Enter a 3-digit number: ";
    std::cin >> num;
    
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;
    
    int sum = hundreds + tens + units;
    
    std::cout << "Sum of the digits: " << sum << std::endl;
    
    return 0;
}
