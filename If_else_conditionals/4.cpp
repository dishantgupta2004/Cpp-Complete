#include <iostream>

int main() {
    int number;
    
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    if (number < 0) {
        std::cout << "The number is negative and skipped" << std::endl;
    } else {
        std::cout << "The number is positive: " << number << std::endl;
    }
    
    return 0;
}
