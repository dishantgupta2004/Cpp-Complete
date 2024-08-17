#include <iostream>

int main() {
    int a, b;
    
    std::cout << "Enter values for a and b: ";
    std::cin >> a >> b;
    
    if (a < 50 && a < b) {
        std::cout << "Both conditions are true." << std::endl;
    } else {
        std::cout << "At least one condition is false." << std::endl;
    }
    
    return 0;
}
